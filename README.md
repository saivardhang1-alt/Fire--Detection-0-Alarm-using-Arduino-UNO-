# Fire-Detection-Alarm-using-Arduino-UNO
# Fire Detection Alarm using Arduino UNO

## Project Overview
A simple fire detection system developed using Arduino UNO and an analog flame sensor. The system detects flame radiation and activates an LED when the sensor reading crosses the configured threshold.

## Hardware Components
- Arduino UNO
- Analog Flame Sensor
- LED
- Breadboard
- Connecting Wires

## Technologies Used
- Embedded C/C++
- Arduino IDE
- Analog Sensor Interfacing
- Serial Communication

## Key Features
- Flame detection using an infrared flame sensor.
- Analog sensor value monitoring.
- Automatic LED activation when a flame is detected.
- Real-time sensor readings through Serial Monitor.

## Working Principle
1. The flame sensor detects infrared radiation from a flame.
2. Arduino UNO reads the analog sensor value through A0.
3. The program compares the reading with the threshold value of 900.
4. If the reading is below 900, the LED connected to pin 9 turns ON.
5. Sensor readings are displayed in the Serial Monitor.

## Pin Connections

| Component | Arduino UNO Pin |
|---|---|
| Flame Sensor VCC | 5V |
| Flame Sensor GND | GND |
| Flame Sensor Analog Output | A0 |
| LED | Digital Pin 9 |

## Source Code
See `code/fire_detection.ino`.

## Project Status
Arduino source code uploaded. Hardware testing and sensor threshold calibration required.

## Safety Note
This is an educational demonstration project and is not a certified fire detection or safety system.
