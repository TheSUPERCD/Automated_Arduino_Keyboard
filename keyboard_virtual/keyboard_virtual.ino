/* Arduino USB HID Keyboard Demo
 * Random Key/Random Delay
 */
#include "usb_hid_keys.h"
uint8_t buf[8] = { 
  0 };   /* Keyboard report buffer */
void setup() 
{
  Serial.begin(9600);
  delay(200);  // Waiting to detect the Keyboard Device

// Pressing Win + R keys to bring up the run prompt
  
  buf[2] = KEY_LGUI;    // character
  buf[3] = KEY_R;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY


  delay(500); // Waiting for the run prompt to open
  
// Typing wt and pressing enter

  buf[2] = KEY_W;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_T;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_ENTER;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY
  

  delay(4000); // Waiting for the Terminal to open

  // typing printf ' in the terminal

  buf[2] = KEY_P;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_R;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_I;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY
  
  buf[2] = KEY_N;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_T;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_F;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_SPACE;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_APOSTROPHE;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

// Now typing out the Hello World program :
// #include<stdio.h>\nvoid main(){printf("Hello World\\n");}

// #include<stdio.h>
  buf[0] = KEY_MOD_LSHIFT;    // MOD
  buf[2] = KEY_3;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_I;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_N;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY
  
  buf[2] = KEY_C;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_L;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_U;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_D;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_E;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[0] = KEY_MOD_LSHIFT;    // MOD
  buf[2] = KEY_COMMA;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_S;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY
  
  buf[2] = KEY_T;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_D;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_I;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_O;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_DOT;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_H;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[0] = KEY_MOD_LSHIFT;    // MOD
  buf[2] = KEY_DOT;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

// typing '\n'

  buf[2] = KEY_BACKSLASH;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_N;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

// void main(){
  buf[2] = KEY_V;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_O;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_I;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY
  
  buf[2] = KEY_D;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_SPACE;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_M;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_A;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_I;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY
  
  buf[2] = KEY_N;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[0] = KEY_MOD_LSHIFT;    // MOD
  buf[2] = KEY_9;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[0] = KEY_MOD_LSHIFT;    // MOD
  buf[2] = KEY_0;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[0] = KEY_MOD_LSHIFT;    // MOD
  buf[2] = KEY_LEFTBRACE;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

// printf("Hello World\\n");}
  buf[2] = KEY_P;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_R;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_I;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY
  
  buf[2] = KEY_N;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_T;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_F;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[0] = KEY_MOD_LSHIFT;    // MOD
  buf[2] = KEY_9;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY



  buf[0] = KEY_MOD_LSHIFT;    // MOD
  buf[2] = KEY_APOSTROPHE;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY



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

  buf[2] = KEY_BACKSLASH;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_BACKSLASH;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_N;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[0] = KEY_MOD_LSHIFT;    // MOD
  buf[2] = KEY_APOSTROPHE;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[0] = KEY_MOD_LSHIFT;    // MOD
  buf[2] = KEY_0;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_SEMICOLON;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[0] = KEY_MOD_LSHIFT;    // MOD
  buf[2] = KEY_RIGHTBRACE;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_APOSTROPHE;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

// typing '> virus.c'
  buf[0] = KEY_MOD_LSHIFT;    // MOD
  buf[2] = KEY_DOT;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_V;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_I;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_R;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_U;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_S;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_DOT;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_C;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

// Done writing the program, now press enter to store it inside a source file

  buf[2] = KEY_ENTER;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

// now compile it 

  buf[2] = KEY_G;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_C;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_C;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_SPACE;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_V;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_I;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_R;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_U;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_S;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_DOT;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_C;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_ENTER;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

// Done compiling, now let's run it :
  buf[2] = KEY_DOT;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_SLASH;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_A;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_DOT;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_O;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_U;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_T;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY

  buf[2] = KEY_ENTER;    // character
  Serial.write(buf, 8); // Send keypress
  releaseKey();   // RELEASE KEY
}

void loop() 
{ 


 
}

void releaseKey() 
{
  buf[0] = 0;
  buf[2] = 0;
  buf[3] = 0;
  Serial.write(buf, 8); // Release key  
}
