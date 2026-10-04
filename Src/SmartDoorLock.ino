// Header Files and Initialization  
//These libraries enable RFID communication, servo motor control, and LCD interfacing.  
  
#include <SPI.h>  
#include <MFRC522.h>  
#include <Servo.h>  
#include <Wire.h>  
#include <LiquidCrystal_I2C.h>  
Constants and Pins  
//Defines pin configurations for RFID, LEDs, and servo motor.  
#define RST_PIN 9 #define SS_PIN 10 int redLEDPin = 2; int greenLEDPin = 6;  
Setup Function  
//Initializes communication, pin modes, and displays the initial status. void 
setup() {  
    Serial.begin(9600);  
    SPI.begin();  

    rfid.PCD_Init();  
    pinMode(redLEDPin, OUTPUT);     pinMode(greenLEDPin, OUTPUT);     
lcd.init();     lcd.backlight();     lockServo.attach(3);     lockServo.write(lockPos);     lcd.print("Place Card...");  
}  
// Main Loop  
//Continuously scans for RFID cards and processes their IDs. void loop() {  
    if (rfid.PICC_IsNewCardPresent() 
&& rfid.PICC_ReadCardSerial()) {         String temp = "";  
        for (byte i = 0; i < rfid.uid.size; i++) {             temp += String(rfid.uid.uidByte[i], DEC);  
        }  
        checkAccess(temp);         rfid.PICC_HaltA();  

        rfid.PCD_StopCrypto1();  
    }  
}  
// Access Control  
//Matches the scanned ID with stored IDs and executes the locking mechanism. void checkAccess(String temp) {     boolean granted = false;     for (int i = 0; i < accessGrantedSize; i++) {         if (accessGranted[i] == temp) {             granted = true;             lockServo.write(unlockPos);             delay(3000);             lockServo.write(lockPos);  
        }     }     if (!granted) {         
digitalWrite(redLEDPin, HIGH);         delay(200);         
digitalWrite(redLEDPin, LOW);  
    }  
}  
  
 
