/* Note:
When driving LED's  you have to inverse the duty cycle,
for example 255 is off and 0 is max power.
*/
int ledPinR = 3;
int ledPinG = 5;
int ledPinB = 6;

void fadeInFadeOut(int maxValue, int minValue ,boolean red,  boolean green, boolean blue, int myDelay) {

for(int fadeValue = minValue ; fadeValue >= maxValue; fadeValue -=5) { 
    analogWrite(ledPinR, fadeValue);         
    delay(myDelay);
  }

  for(int fadeValue = maxValue ; fadeValue <= minValue; fadeValue +=5) { 
    analogWrite(ledPinR, fadeValue);         
    delay(myDelay);
  } 
}