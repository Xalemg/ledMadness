void fadeInFadeOut(int maxValue, int minValue ,boolean red,  boolean green, boolean blue, int myDelay) {

for(int fadeValue = minValue ; fadeValue >= maxValue; fadeValue -=5) {
  //fadeIn
if(red) {
  analogWrite(ledPinR, fadeValue);
} 
if(blue) {
  analogWrite(ledPinB, fadeValue);
  }  
if(green) {
  analogWrite(ledPinG, fadeValue);
  } 
  delay(myDelay);
}

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