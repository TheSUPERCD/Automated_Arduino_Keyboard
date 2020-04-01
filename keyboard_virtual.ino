/* Arduino USB HID Keyboard Demo
 * Random Key/Random Delay
 */
#include "usb_hid_keys.h"
uint8_t buf[8] = { 
  0 };   /* Keyboard report buffer */
void setup() 
{
  Serial.begin(9600);
  randomSeed(analogRead(0));
  delay(200);

  
  buf[2] = KEY_LGUI;    // character
  buf[3] = KEY_R;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  delay(500);
  
  buf[2] = KEY_N;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_O;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_T;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY
  
  buf[2] = KEY_E;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_P;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_A;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_D;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_ENTER;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY
  
}

void loop() 
{ 
  delay(1000);





  
  buf[0] = KEY_MOD_LSHIFT;    // MOD
  buf[2] = KEY_H;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_E;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_L;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_L;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY
  
  buf[2] = KEY_O;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_SPACE;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[0] = KEY_MOD_LSHIFT;    // MOD
  buf[2] = KEY_W;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_O;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_R;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_L;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_D;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[0] = KEY_MOD_LSHIFT;    // MOD
  buf[2] = KEY_1;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_ENTER;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY
 
}

void releaseKey() 
{
  buf[0] = 0;
  buf[2] = 0;
  buf[3] = 0;
  Serial.write(buf, 8); // Release key  
}
