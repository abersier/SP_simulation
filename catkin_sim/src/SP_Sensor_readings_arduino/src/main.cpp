#undef ESP32
#include <ros.h>
#define ESP32

#include <std_msgs/Float32MultiArray.h>
#include <std_msgs/String.h>
#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>

#include <Adafruit_SGP30.h>

#include <Adafruit_Sensor.h>
#include "Adafruit_BME680.h"
#include "bsec.h"
#define SEALEVELPRESSURE_HPA (1013.25)

// Define the GPIO pins as custom I2C pins.
#define I2C_SDA 32
#define I2C_SCL 27

// Create a new instance of the TwoWire class
TwoWire I2Ccustom = TwoWire(1);

const int LED_BLINK_DELAY = 500;
const int BASELINE_UPDATE_INTERVAL = 30;
const int LED_PIN = 12;

Adafruit_SGP30 sgp;
Adafruit_BME680 bme(&I2Ccustom);

ros::NodeHandle nh;
std_msgs::Float32MultiArray sensor_data;
std_msgs::String baseline_msg;


ros::Publisher pub("sensor_data", &sensor_data); //Create a publisher object
ros::Publisher baseline_pub("baseline_data", &baseline_msg);


/* return absolute humidity [mg/m^3] with approximation formula
* @param temperature [°C]
* @param humidity [%RH]
*/
uint32_t getAbsoluteHumidity(float temperature, float humidity) {
    // approximation formula from Sensirion SGP30 Driver Integration chapter 3.15
    const float absoluteHumidity = 216.7f * ((humidity / 100.0f) * 6.112f * exp((17.62f * temperature) / (243.12f + temperature)) / (273.15f + temperature)); // [g/m^3]
    const uint32_t absoluteHumidityScaled = static_cast<uint32_t>(1000.0f * absoluteHumidity); // [mg/m^3]
    return absoluteHumidityScaled;
}


void setup() {

  Wire.begin();
  I2Ccustom.begin(I2C_SDA, I2C_SCL);

  // Setup pin 12 as a digital output pin
  pinMode (LED_PIN, OUTPUT);
  Serial.begin(57600);
  nh.initNode();
  nh.advertise(pub);
  nh.advertise(baseline_pub);

  //Initialize data
  sensor_data.data_length = 2;
  sensor_data.data = new float[sensor_data.data_length];

  // Test the Bosch sensor
  Serial.println(F("BME680 async test"));
  if (!bme.begin()) {
    while (1){
          Serial.println("Could not find a valid BME680 sensor, check wiring!");
    };
  }
  Serial.println("Found BME680");


  // Configure the Bosch sensor
  // Set up oversampling and filter initialization
  bme.setTemperatureOversampling(BME680_OS_8X);
  bme.setHumidityOversampling(BME680_OS_2X);
  bme.setPressureOversampling(BME680_OS_4X);
  bme.setIIRFilterSize(BME680_FILTER_SIZE_3);
  bme.setGasHeater(320, 150); // 320*C for 150 ms

  // Test the SGP30 sensor
  Serial.println("Adafruit SGP30 test");
  bool sgp30Started = sgp.begin();
  int attempts = 0;

  // Verify serial connection to the sensor
  while (!sgp30Started && attempts < 5) {
    delay(1000); // Wait for a second
    sgp30Started = sgp.begin();
    attempts++;
  }

  if (!sgp30Started) {
    Serial.println("SGP30 not found, check wiring");
    while (1);
  }
  Serial.println("Found SGP30");

  //If you have a baseline measurement from before you can assign it to start, to 'self-calibrate'
  //sgp.setIAQBaseline(0x8E68, 0x8F41);  //Will vary for each sensor!

}


int counter = 0;
float temperature = 0; // [°C]
float humidity = 0; // [%RH]
float TVOC_value = 0;
float raw_ethanol = 0;
float raw_bme = 0;

void loop() {

  // Tell BME680 to begin measurement.
  unsigned long endTime = bme.beginReading();
  if (endTime == 0) {
    Serial.println(F("Failed to begin reading :("));
    return;
  }

  // Here inbetween you can do parallel work
  
  if (!bme.endReading()) {
      Serial.println(F("Failed to complete reading :("));
      return;
    }

  //If you have a temperature / humidity sensor, you can set the absolute humidity to enable the humditiy compensation for the air quality signals
  temperature = bme.temperature;
  humidity = bme.humidity;
  raw_bme = bme.gas_resistance;
  sgp.setHumidity(getAbsoluteHumidity(temperature, humidity));
  

  if (! sgp.IAQmeasure()) {
    Serial.println("Measurement failed");
    return;
  }
  TVOC_value = sgp.TVOC; //(ppb/t)

  if (! sgp.IAQmeasureRaw()) {
    Serial.println("Raw Measurement failed");
    return;
  }
  raw_ethanol = sgp.rawEthanol; //determine units

  counter++;

  // In this if-statement, you can get the new baseline values every 30 seconds
  if (counter == BASELINE_UPDATE_INTERVAL) {
    counter = 0;

    uint16_t TVOC_base, eCO2_base;
    if (! sgp.getIAQBaseline(&eCO2_base, &TVOC_base)) {
      Serial.println("Failed to get baseline readings");
      return;
    }
    // // In case you want to work with the serial monitor
    // Serial.print("****Baseline values: eCO2: 0x"); Serial.print(eCO2_base, HEX);
    // Serial.print(" & TVOC: 0x"); Serial.println(TVOC_base, HEX);

    // Variant using ROS
    String baseline = "****Baseline values: eCO2: 0x" + String(eCO2_base, HEX) + " & TVOC: 0x" + String(TVOC_base, HEX);
    baseline_msg.data = baseline.c_str();
    baseline_pub.publish(&baseline_msg);
  }

  float time = 0;    
  ros::Time current_time = nh.now();
  time = current_time.sec;

  sensor_data.data[0] = TVOC_value;
  //Might want to consider raw value as well
  sensor_data.data[1] = time;
  // sensor_data.data[2] = temperature;
  // sensor_data.data[3] = humidity;
  pub.publish(&sensor_data);

  //Use of the LED to indicate that the sensor is working
  digitalWrite (LED_PIN, HIGH);	// turn on the LED
  delay(LED_BLINK_DELAY);
  digitalWrite (LED_PIN, LOW);	// turn off the LED
  delay(LED_BLINK_DELAY);

  // //In case you want to use the serial monitor to see the data
  // Serial.print("TVOC: ");
  // Serial.println(TVOC_value);
  // Serial.print("Raw value: ");
  // Serial.println(raw_ethanol);
  // Serial.print("Raw BME value: ");
  // Serial.println(raw_bme);
  // Serial.print("humidity: ");
  // Serial.println(humidity);
  // Serial.print("temperature: ");
  // Serial.println(temperature);
  // Serial.println("LED is blinking");

  nh.spinOnce();

}





// // This script is an I2C scanner that will scan the I2C bus for devices
// void setup() {
//   Wire.begin();

//   Serial.begin(57600);
//   while (!Serial);             // Leonardo: wait for serial monitor
//   Serial.println("\nI2C Scanner");
// }

// void loop() {
//   byte error, address;
//   int nDevices;

//   Serial.println("Scanning...");

//   nDevices = 0;
//   for(address = 1; address < 127; address++ ) {
//     Wire.beginTransmission(address);
//     error = Wire.endTransmission();

//     if (error == 0) {
//       Serial.print("I2C device found at address 0x");
//       if (address<16) 
//         Serial.print("0");
//       Serial.print(address,HEX);
//       Serial.println("  !");

//       nDevices++;
//     }
//     else if (error==4) {
//       Serial.print("Unknown error at address 0x");
//       if (address<16) 
//         Serial.print("0");
//       Serial.println(address,HEX);
//     }    
//   }
//   if (nDevices == 0)
//     Serial.println("No I2C devices found\n");
//   else
//     Serial.println("done\n");

//     delay(5000);           // wait 5 seconds for next scan
// }