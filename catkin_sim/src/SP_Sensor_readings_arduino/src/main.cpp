#undef ESP32
#include <ros.h>
#define ESP32

#include <std_msgs/Float32MultiArray.h>
#include <std_msgs/String.h>
#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include <EEPROM.h>

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


ros::Publisher pub("sensor_data", &sensor_data);
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
  EEPROM.begin(512);  // Initialize EEPROM with 512 bytes of space


  // Setup pin 12 as a digital output pin
  pinMode (LED_PIN, OUTPUT);
  Serial.begin(57600);
  nh.initNode();
  nh.advertise(pub);
  nh.advertise(baseline_pub);

  //Initialize data
  sensor_data.data_length = 4;
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

  // Set the eCO2 and TVOC baselines to a known value
  uint16_t eCO2_base, TVOC_base;
  eCO2_base = EEPROM.read(0) << 8 | EEPROM.read(1);  // Load eCO2 baseline from EEPROM
  TVOC_base = EEPROM.read(2) << 8 | EEPROM.read(3);  // Load TVOC baseline from EEPROM

  if (eCO2_base != 0xFFFF && TVOC_base != 0xFFFF) {  // If the EEPROM contains valid baseline values
    sgp.setIAQBaseline(eCO2_base, TVOC_base);  // Set the baseline values
  } else {
    sgp.setIAQBaseline(0x90c3, 0x9799);  //Will vary for each sensor!
  }

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

    String baseline = "****Baseline values: eCO2: 0x" + String(eCO2_base, HEX) + " & TVOC: 0x" + String(TVOC_base, HEX);
    baseline_msg.data = baseline.c_str();
    baseline_pub.publish(&baseline_msg);

    // Read the current baseline values from the EEPROM
    uint16_t eCO2_base_current = EEPROM.read(0) << 8 | EEPROM.read(1);
    uint16_t TVOC_base_current = EEPROM.read(2) << 8 | EEPROM.read(3);

    // Compare the new baseline values with the ones in the EEPROM
    if (eCO2_base != eCO2_base_current || TVOC_base != TVOC_base_current) {
      // If they are different, write the new baseline values to the EEPROM
      EEPROM.write(0, eCO2_base >> 8);
      EEPROM.write(1, eCO2_base & 0xFF);
      EEPROM.write(2, TVOC_base >> 8);
      EEPROM.write(3, TVOC_base & 0xFF);
      EEPROM.commit();
    }
  }

  float time = 0;    
  ros::Time current_time = nh.now();
  time = current_time.sec;

  sensor_data.data[0] = TVOC_value;
  // Might want to consider raw value as well
  sensor_data.data[1] = time;
  sensor_data.data[2] = raw_ethanol;
  sensor_data.data[3] = raw_bme;

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