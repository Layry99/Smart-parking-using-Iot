#include "thingProperties.h"
#include <Ultrasonic.h>
#include <WiFiNINA.h>

char ssid[] = "POCOPHONEs";      // your network SSID (name)
char pass[] = "barathrum";  // your network password

Ultrasonic ultrasonic1(9, 10);  // Trig Pin, Echo Pin for Parking 1
Ultrasonic ultrasonic2(5, 6);   // Trig Pin, Echo Pin for Parking 2
Ultrasonic ultrasonic3(7, 8);   // Trig Pin, Echo Pin for Parking 3

void setup() {
  Serial.begin(9600);
  delay(1500);
  initProperties();
  
  // Connect to WiFi
  connectWiFi();

  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  int distanceCm1 = ultrasonic1.read();
  int distanceCm2 = ultrasonic2.read();
  int distanceCm3 = ultrasonic3.read();

  bool parking1Occupied = (distanceCm1 < 15);
  bool parking2Occupied = (distanceCm2 < 15);
  bool parking3Occupied = (distanceCm3 < 15);

  if (parking1Occupied) {
    Serial.println("Parking 1: Occupied");
    digitalWrite(4, HIGH); // LED ON
  } else {
    Serial.println("Parking 1: Empty");
    digitalWrite(4, LOW); // LED OFF
  }

  if (parking2Occupied) {
    Serial.println("Parking 2: Occupied");
    digitalWrite(3, HIGH); // LED ON
  } else {
    Serial.println("Parking 2: Empty");
    digitalWrite(3, LOW); // LED OFF
  }

  if (parking3Occupied) {
    Serial.println("Parking 3: Occupied");
    digitalWrite(2, HIGH); // LED ON
  } else {
    Serial.println("Parking 3: Empty");
    digitalWrite(2, LOW); // LED OFF
  }

  // Update the parkingAvailable variable based on occupancy status
  int parkingAvailable = 3; // Assuming 3 parking spots initially

  if (parking1Occupied) {
    parkingAvailable--;
  }

  if (parking2Occupied) {
    parkingAvailable--;
  }

  if (parking3Occupied) {
    parkingAvailable--;
  }

  // Update cloud variable (this will automatically sync with the cloud)
  parkingAvailableProperty = parkingAvailable;

  // Update cloud variables
  ArduinoCloud.update();
  delay(1000);
}

void connectWiFi() {
  // attempt to connect to WiFi
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(ssid);
    WiFi.begin(ssid, pass);
    delay(10000);  // wait for 10 seconds for the WiFi connection
  }
  Serial.println("Connected to WiFi");
}
