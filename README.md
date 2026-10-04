# Smart-door-lock-system-arduino-using-RFID
Arduino-based smart door lock system using RFID authentication, servo motor control, LCD feedback, LEDs, and buzzer alerts for secure and automated access control.
🔐 Smart Door Lock System Using Arduino & RFID

An Arduino-based Smart Door Lock Syste* that uses *RFID authentication to control access to a door. Authorized RFID cards unlock the door through a servo motor, while unauthorized cards trigger visual and audio alerts.

The system combines Arduino Uno, RC522 RFID, servo motor, 16×2 LCD, LEDs, and buzzer to provide a low-cost and practical electronic access-control solution.

 🚀 Project Overview

Traditional mechanical locks can be inconvenient and provide limited access-control functionality. This project demonstrates a smart and affordable alternative using RFID-based authentication.

The system reads the unique ID of an RFID card and compares it with pre-stored authorized IDs. Based on the authentication result, the Arduino controls the door-lock mechanism and provides immediate feedback to the user.

 ✨ Key Features

* 🔑 RFID-based user authentication
* 🔓 Automatic door unlocking using a servo motor
* 🔒 Automatic locking after access
* 🟢 Green LED for authorized access
* 🔴 Red LED for unauthorized access
* 🔊 Buzzer alert for denied access
* 📟 LCD status feedback
* ⚡ Arduino-based embedded control
* 🛠️ Low-cost hardware implementation
* ➕ Support for adding and removing authorized RFID cards

## 🧰 Hardware Components

| Component         | Purpose                         |
| ----------------- | ------------------------------- |
| Arduino Uno       | Main microcontroller            |
| RC522 RFID Module | Reads RFID card/tag IDs         |
| Servo Motor       | Controls the locking mechanism  |
| 16×2 LCD          | Displays system status          |
| Green LED         | Indicates authorized access     |
| Red LED           | Indicates unauthorized access   |
| Buzzer            | Provides an access-denied alert |
| Resistors         | LED/current protection          |
| Breadboard        | Circuit prototyping             |
| Jumper Wires      | Component connections           |
| RFID Cards/Tags   | User authentication             |

 ⚙️ System Workflow

```text
RFID Card/Tag
      ↓
RC522 RFID Reader
      ↓
Arduino Uno
      ↓
Compare RFID ID
      ↓
 ┌───────────────┐
 │ Authorized?   │
 └───────┬───────┘
         │
    ┌────┴────┐
   YES        NO
    ↓          ↓
Servo Unlock  Access Denied
    ↓          ↓
Green LED     Red LED
    ↓          ↓
LCD Message   Buzzer
    ↓
Automatic Lock


 🔌 System Components & Architecture

The RC522 RFID reader communicates with the Arduino using the SPI interface. The Arduino processes the scanned RFID identifier and determines whether access should be granted.

When an authorized card is detected, the servo motor operates the locking mechanism and the system provides confirmation through the LED and LCD. When an unauthorized card is detected, access is denied and the red LED and buzzer provide an alert.

 💻 Software & Technologies

* Arduino
* C/C++
* RFID 
* SPI Communication
* Servo Motor Control
* LCD Interface
* Embedded Systems
* Hardware Prototyping



 🧪 Testing & Results

The system was tested using different RFID cards.

 Authorized Card

* RFID card is detected.
* Arduino verifies the card ID.
* Access is granted.
* Servo motor unlocks the mechanism.
* Green LED indicates successful authentication.
* LCD provides system feedback.

 Unauthorized Card

* RFID card is detected.
* Arduino compares the ID with authorized IDs.
* Access is denied.
* Red LED is activated.
* Buzzer provides an alert.
* Lock remains secured.

The experimental testing demonstrated successful access control for both authorized and unauthorized RFID cards.

 🔮 Future Improvements

Possible improvements include:

* 📱 Mobile application integration
* 👤 Biometric authentication
* ☁️ IoT/cloud-based access monitoring
* 📝 RFID access logging
* ➕ On-device RFID registration
* 🔔 Remote security notifications
* 🔐 Improved physical lock protection

 🎯 Learning Outcomes

This project provided practical experience with:

* Embedded systems development
* Arduino programming
* RFID communication
* SPI-based device interfacing
* Servo motor control
* LCD interfacing
* Hardware circuit design
* Access-control logic
* Embedded system testing

 👨‍💻 Author

Farhad Ahmed Qambrani

Department of Computer Systems Engineering
Sukkur IBA University
 
📄 Project Documentation

The complete project report is available in the embeded systems project report.pdf

---

⭐ If you find this project useful, consider giving the repository a star!
