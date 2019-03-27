

#include "libs/pins.h"
#include "libs/effects/effects.h"
//Always invoke functions in order of params Red Green Blue

void setup()  { 

    // Red
  fadeInFadeOut(0, 255,true, false, false, 5);
  // Green
  fadeInFadeOut(0, 255,false, true, false, 5);
  // Blue
  fadeInFadeOut(0, 255,false, false, true, 5);
  fadeIn(150, 255,true, false, true, 50);
}

void loop()  { 

  breath(0, 150,true, false, true, 100);

}