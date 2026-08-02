#include <Servo.h>

// Create servo object
Servo myServo;

// Pin assignments
const int buttonPin = 2;
const int ledPin = 8;

void setup() {
  // Attach servo to pin 9
  myServo.attach(9);

  // Configure pins
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);

  // Start servo at 0 degrees
  myServo.write(0);
}

void loop() {
  // Check if button is pressed
  if (digitalRead(buttonPin) == LOW) {

    // Turn on LED
    digitalWrite(ledPin, HIGH);

    // Rotate servo to dispense treat
    myServo.write(90);
    delay(500);

    // Return servo to starting position
    myServo.write(0);
    delay(500);

  } else {

    // Turn LED off
    digitalWrite(ledPin, LOW);

  }
}
