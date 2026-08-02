# Smart Cat Treat Dispenser

## CS 2810 Final Project

**Team Members:**
- Naomi Finau
- Anh Nguyen

---

## Project Overview

The Smart Cat Treat Dispenser is an Arduino-based prototype designed to dispense a cat treat when a pushbutton is pressed. The project demonstrates the use of digital inputs, digital outputs, and servo motor control using an Arduino Uno.

When the pushbutton is pressed:
- The LED indicator turns on.
- The SG90 servo motor rotates 90 degrees to simulate opening the treat dispenser.
- After a short delay, the servo returns to its starting position, closing the dispenser.

This project was created to demonstrate fundamental embedded systems concepts including hardware integration, Arduino programming, and actuator control.

---

## Hardware Used

- Arduino Uno R3
- SG90 Micro Servo Motor
- Pushbutton Switch
- Green LED
- 220Ω Resistor
- Breadboard
- Jumper Wires
- Cardboard Prototype Enclosure

---

## Software Used

- Arduino IDE
- Servo Library

---

## How to Run

1. Connect the hardware according to the circuit design.
2. Open the Arduino sketch in the Arduino IDE.
3. Upload the code to the Arduino Uno.
4. Press the pushbutton.
5. The LED will illuminate and the servo will rotate to simulate dispensing a cat treat.

---

## Future Improvements

Future versions of this project could include:

- A funnel-shaped treat reservoir for more reliable dispensing.
- A redesigned dispensing gate with a larger opening.
- Continuous servo rotation to help guide treats through the opening.
- A sturdier enclosure made from wood, acrylic, or 3D-printed parts.
- Scheduled automatic feeding using a real-time clock (RTC).
- Wireless control using Wi-Fi or Bluetooth.
- A mobile application for remote treat dispensing.

---

## Repository Contents

```
Smart-Cat-Treat-Dispenser/
│
├── SmartCatTreatDispenser.ino
├── README.md
```

---

## Demonstration

This project was completed as the final project for **CS 2810 – Computer Organization and Performance**.

The prototype successfully demonstrates:
- Reading digital button input.
- Controlling an LED output.
- Operating an SG90 servo motor.
- Integrating hardware and software into a functional embedded system.

---

## License

This project was created for educational purposes as part of a college course.
