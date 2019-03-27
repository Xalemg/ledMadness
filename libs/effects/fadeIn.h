
void fadeIn(int maxValue, int minValue ,boolean red,  boolean green, boolean blue, int myDelay) {

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
}