# Arduino Distance Detector With a Buzzer and LED's

## Overview

This project demonstrates how to create a distance detector using an Arduino, an HC-SR04 Ultrasonic Sensor, a Buzzer, and LEDs. The system visually and audibly represents the distance of an object from the ultrasonic sensor.

### Arduino Project

#### Features

- Utilizes an Arduino Uno.
- Implements an HC-SR04 Ultrasonic Sensor for distance measurement.
- Uses LEDs to visually indicate distance.
- Includes a buzzer for audible distance feedback.

#### Setup

1. Connect the components as described in the project documentation.
2. Upload the provided Arduino code to your Arduino Uno.

```bash
# Example command for uploading Arduino code
arduino-cli upload -p /dev/ttyACM0 -b arduino:avr:uno YourArduinoCode.ino

# DIY Raspberry Pi Temperature and Humidity Sensor

## Overview

This project involves creating a temperature and humidity sensor using a DHT22 sensor with a Raspberry Pi. The data is read and displayed in real-time using a Python script.

### Features

- Utilizes a Raspberry Pi board.
- Incorporates a DHT22 sensor for temperature and humidity readings.
- Simple Python script for data retrieval.

### Setup

1. Connect the DHT22 sensor to the Raspberry Pi as described in the project documentation.
2. Run the provided Python script.

```bash
# Example command for running the Python script
python3 temperature_sensor.py
