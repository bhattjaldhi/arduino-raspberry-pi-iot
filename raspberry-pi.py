# Import necessary libraries
import Adafruit_DHT
import time

# Define sensor type and pin
sensor = Adafruit_DHT.DHT22
pin = 4  # GPIO04

while True:
    try:
        # Attempt to read humidity and temperature data from the sensor
        humidity, temperature = Adafruit_DHT.read_retry(sensor, pin)

        # Check if the data is valid
        if humidity is not None and temperature is not None:
            # Display temperature and humidity on the terminal
            print('Temperature: {0:.1f}°C'.format(temperature))
            print('Humidity: {0:.1f}%'.format(humidity))
        else:
            # Display an error message if data retrieval fails
            print('Failed to retrieve data. Check sensor connection.')

        # Wait for 2 seconds before reading sensor data again
        time.sleep(2)

    except KeyboardInterrupt:
        # Exit the program when KeyboardInterrupt (Ctrl+C) is detected
        print('\nProgram terminated by user.')
        break