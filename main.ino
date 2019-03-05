
#include "libs/effects.h"

int ledPinR = 3;
int ledPinG = 5;
int ledPinB = 6;


void setup()  { 

    // Red
  fadeInFadeOut(0 , 255);
  // Green
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) { 
    analogWrite(ledPinG, fadeValue);         
    delay(5);
  } 
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    analogWrite(ledPinG, fadeValue);         
    delay(5);
  } 
  // Blue
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) { 
    analogWrite(ledPinB, fadeValue);         
    delay(5);
  } 
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    analogWrite(ledPinB, fadeValue);         
    delay(5);
  } 
   for(int fadeValue = 255 ; fadeValue >= 125; fadeValue -=5) { 
    analogWrite(ledPinR, fadeValue);         
    analogWrite(ledPinB, fadeValue);
    delay(25);                            
  } 
} 

void loop()  { 

  // Purple
  for(int fadeValue = 125 ; fadeValue >= 0; fadeValue -=5) { 
    analogWrite(ledPinR, fadeValue);         
    analogWrite(ledPinB, fadeValue);
    delay(50);                            
  } 
  
  for(int fadeValue = 0 ; fadeValue <= 125; fadeValue +=5) { 
    analogWrite(ledPinR, fadeValue);    
    analogWrite(ledPinB, fadeValue);     
    delay(50);
  } 
}