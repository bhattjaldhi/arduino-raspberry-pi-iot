// Define the pins for ultrasonic sensor, LEDs, and buzzer
#define trigPin 7
#define echoPin 6
#define led 13
#define led2 12
#define led3 11
#define led4 10
#define led5 9
#define led6 8
#define buzzer 3

// Variable to store the buzzer sound frequency
int sound = 250;

void setup() {
  // Start serial communication for debugging
  Serial.begin(9600);

  // Set up pin modes for ultrasonic sensor, LEDs, and buzzer
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // Variables to store duration and calculated distance
  long duration, distance;

  // Trigger ultrasonic sensor to measure distance
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure the duration of the pulse from the echo pin
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance based on the duration
  distance = (duration / 2) / 29.1;

  // LED and Buzzer control based on distance thresholds
  if (distance <= 30) {
    digitalWrite(led, HIGH);
    sound = 250;
  } else {
    digitalWrite(led, LOW);
  }

  if (distance < 25) {
    digitalWrite(led2, HIGH);
    sound = 260;
  } else {
    digitalWrite(led2, LOW);
  }

  if (distance < 20) {
    digitalWrite(led3, HIGH);
    sound = 270;
  } else {
    digitalWrite(led3, LOW);
  }

  if (distance < 15) {
    digitalWrite(led4, HIGH);
    sound = 280;
  } else {
    digitalWrite(led4, LOW);
  }

  if (distance < 10) {
    digitalWrite(led5, HIGH);
    sound = 290;
  } else {
    digitalWrite(led5, LOW);
  }

  if (distance < 5) {
    digitalWrite(led6, HIGH);
    sound = 300;
  } else {
    digitalWrite(led6, LOW);
  }

  // Check if the distance is out of range
  if (distance > 30 || distance <= 0) {
    Serial.println("Out of range");
    noTone(buzzer);
  } else {
    // Display distance and activate buzzer
    Serial.print(distance);
    Serial.println(" cm");
    tone(buzzer, sound);
  }

  // Delay before taking the next distance measurement
  delay(500);
}
