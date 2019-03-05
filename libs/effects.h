/* Note:
When driving LED's  you have to inverse the duty cycle,
for example 255 is off and 0 is max power.
*/

void fadeInFadeOut(int maxValue, int minValue ,boolean red, boolean blue, boolean green) {

for(int fadeValue = minValue ; fadeValue >= maxValue; fadeValue -=5) { 
    analogWrite(ledPinR, fadeValue);         
    delay(5);
  }

  for(int fadeValue = maxValue ; fadeValue <= minValue; fadeValue +=5) { 
    analogWrite(ledPinR, fadeValue);         
    delay(5);
  } 
}