#include <Servo.h>

Servo myServo;

const int buttonPin = 2;
const int ledPin = 8;

void setup() {
  myServo.attach(9);

  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);

  myServo.write(0);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    digitalWrite(ledPin, HIGH);

    myServo.write(90);
    delay(500);

    myServo.write(0);
    delay(500);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}