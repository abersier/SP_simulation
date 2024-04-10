#undef ESP32 //This is a workaround for a bug in the Adafruit_MPL115A2 library
#include <ros.h>
#define ESP32

#include <std_msgs/Float32MultiArray.h>
#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_SGP30.h>
#include <Adafruit_MPL115A2.h>
#include <SPI.h>


const int ledPin = 12;
Adafruit_SGP30 sgp;
//Adafruit_MPL115A2 mpl115a2;


ros::NodeHandle nh;
std_msgs::Float32MultiArray sensor_data;
ros::Publisher pub("sensor_data", &sensor_data); //Create a publisher object


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

  //Setup pin 5 as a digital output pin
  pinMode (ledPin, OUTPUT);
  Serial.begin(57600); //57600
  nh.initNode();
  nh.advertise(pub);

  //Initialize data
  sensor_data.data_length = 2;
  sensor_data.data = new float[sensor_data.data_length];

  Serial.println("Adafruit SGP30 test");

  //Verify serial connection to the sensor
  Serial.println("Getting sensor data ...");
  if (! sgp.begin()){
    Serial.println("Sensor not found, check wiring");
    while (1);
  }
  Serial.println("Found SGP30");

  //If you have a baseline measurement from before you can assign it to start, to 'self-calibrate'
  //sgp.setIAQBaseline(0x8E68, 0x8F41);  //Will vary for each sensor!
  
}

int counter = 0;

void loop() {

  //If you have a temperature / humidity sensor, you can set the absolute humidity to enable the humditiy compensation for the air quality signals
  float temperature = 0; // [°C]
  //temperature = ; // Here, use function from new sensor
  float humidity = 0; // [%RH]
  //humidity = ; // Here, use function from new sensor
  sgp.setHumidity(getAbsoluteHumidity(temperature, humidity));
  
  if (! sgp.IAQmeasure()) {
    Serial.println("Measurement failed");
    return;
  }
  float TVOC_value = 0;
  TVOC_value = sgp.TVOC; //(ppb/t)

  if (! sgp.IAQmeasureRaw()) {
    Serial.println("Raw Measurement failed");
    return;
  }
  float raw_ethanol = 0;
  raw_ethanol = sgp.rawEthanol; //determine units

  float time = 0;    

  counter++;

  if (counter == 30) {
    counter = 0;

    uint16_t TVOC_base, eCO2_base;
    if (! sgp.getIAQBaseline(&eCO2_base, &TVOC_base)) {
      Serial.println("Failed to get baseline readings");
      return;
    }
    Serial.print("****Baseline values: eCO2: 0x"); Serial.print(eCO2_base, HEX);
    Serial.print(" & TVOC: 0x"); Serial.println(TVOC_base, HEX);
  }

  ros::Time current_time = nh.now();
  time = current_time.sec;

  sensor_data.data[0] = TVOC_value;
  //Might want to consider raw value as well
  sensor_data.data[1] = time;
  //sensor_data.data[2] = temperature;
  //sensor_data.data[3] = humidity;

  pub.publish(&sensor_data);

  //Use of the LED to indicate that the sensor is working
  digitalWrite (ledPin, HIGH);	// turn on the LED
  delay(1000);
  digitalWrite (ledPin, LOW);	// turn off the LED
  delay(1000);

  //In case you want to use the serial monitor to see the data
  Serial.print("TVOC: ");
  Serial.println(TVOC_value);
  Serial.print("Raw value: ");
  Serial.println(raw_ethanol);

  nh.spinOnce();

}