//External libraries MFRC522
#include "libs/pins.h"
#include "libs/effects/effects.h"
#include <SPI.h>
#include <MFRC522.h>
 
const int RST_PIN = 9;            // Pin 9 para el reset del RC522
const int SS_PIN = 10;            // Pin 10 para el SS (SDA) del RC522
MFRC522 mfrc522(SS_PIN, RST_PIN);   // Crear instancia del MFRC522
 
void printArray(byte *buffer, byte bufferSize) {
   for (byte i = 0; i < bufferSize; i++) {
      Serial.print(buffer[i] < 0x10 ? " 0" : " ");
      Serial.print(buffer[i], HEX);
   }
}
//Always invoke functions in order of params Red Green Blue

void setup()  { 

    // Red
  fadeInFadeOut(0, 255,true, false, false, 5);
  // Green
  fadeInFadeOut(0, 255,false, true, false, 5);
  // Blue
  fadeInFadeOut(0, 255,false, false, true, 5);
    //Purple
  fadeIn(150, 255,true, false, true, 50);
}

void loop()  { 
  //Purple
  //breath(0, 150,true, false, true, 100);
// Detectar tarjeta
	if (mfrc522.PICC_IsNewCardPresent())
	{
		if (mfrc522.PICC_ReadCardSerial())
		{
			Serial.print(F("Card UID:"));
			printArray(mfrc522.uid.uidByte, mfrc522.uid.size);
			Serial.println();
  fadeInFadeOut(0, 255,true, false, false, 5);
			// Finalizar lectura actual
			mfrc522.PICC_HaltA();
		}
	}
	delay(250);
}