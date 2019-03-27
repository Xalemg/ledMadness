
void fadeOut(int maxValue, int minValue ,boolean red,  boolean green, boolean blue, int myDelay) {

for(int fadeValue = maxValue ; fadeValue <= minValue; fadeValue +=5) { 
  if(red) {
      analogWrite(ledPinR, fadeValue);
  }
    if(green){
      analogWrite(ledPinG, fadeValue);
  }
    if(blue) {
      analogWrite(ledPinB, fadeValue);
  }
  delay(myDelay);
  } 
}