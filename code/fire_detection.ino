/*
  Project: Fire Detection Alarm
  Controller: Arduino UNO
  Sensor: Analog Flame Sensor
  Output: LED
*/

#include <SoftwareSerial.h>

int sensorPin = A0;       // Flame sensor analog output
int sensorValue = 0;      // Stores sensor reading
int led = 9;              // LED output pin

void setup() {
  pinMode(led, OUTPUT);

  Serial.begin(9600);

  Serial.println("Fire Detection System Started");
}

void loop() {

  // Read flame sensor value
  sensorValue = analogRead(sensorPin);

  // Display sensor reading
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);

  // Check whether fire is detected
  if (sensorValue < 900) {

    Serial.println("Fire Detected");
    Serial.println("LED ON");

    digitalWrite(led, HIGH);
    delay(1000);
  }

  // Turn LED off
  digitalWrite(led, LOW);

  delay(sensorValue);
}
