#include "usb_hid_keys.h"
uint8_t buf[8] = { 
  0 };   /* Keyboard report buffer */


void releaseKey() 
{
  buf[0] = 0;
  buf[2] = 0;
  buf[3] = 0;
  Serial.write(buf, 8); // Release key
}

void pressKey(int CHARACTER, int MOD_1, int MOD_2)
{
  if(MOD_1 != 0x00){
    buf[0] = MOD_1;
  }
  if (MOD_2 != 0x00)
  {
    buf[3] = MOD_2;
  }
  buf[2] = CHARACTER;
  Serial.write(buf, 8);
}

void sendKeys(int CHARACTER, int MOD_1, int MOD_2)
{
  pressKey(CHARACTER,MOD_1,MOD_2);
  releaseKey();
}


void setup()
{
  Serial.begin(9600);
  delay(200);  // Waiting to detect the Keyboard Device

// Pressing Win + R keys to bring up the run prompt
  sendKeys(KEY_LGUI,0x00,KEY_R);
//  buf[2] = KEY_LGUI;    // character
//  buf[3] = KEY_R;    // character
//  Serial.write(buf, 8); // Send keypress
//  releaseKey();   // RELEASE KEY


  delay(500); // Waiting for the run prompt to open
  
// Typing wt and pressing enter

  sendKeys(KEY_W,0x00,0x00);
  sendKeys(KEY_T,0x00,0x00);
  sendKeys(KEY_ENTER,0x00,0x00);
  delay(4000); // Waiting for the Terminal to open

  // typing printf ' in the terminal

  sendKeys(KEY_P,0x00,0x00);
  sendKeys(KEY_R,0x00,0x00);
  sendKeys(KEY_I,0x00,0x00);
  sendKeys(KEY_N,0x00,0x00);
  sendKeys(KEY_T,0x00,0x00);
  sendKeys(KEY_F,0x00,0x00);
  sendKeys(KEY_SPACE,0x00,0x00);
  sendKeys(KEY_APOSTROPHE,0x00,0x00);

// Now typing out the Hello World program :
// #include<stdio.h>\nvoid main(){printf("Hello World\\n");}

// #include<stdio.h>
  sendKeys(KEY_3,KEY_MOD_LSHIFT,0x00);
  sendKeys(KEY_I,0x00,0x00);
  sendKeys(KEY_N,0x00,0x00);
  sendKeys(KEY_C,0x00,0x00);
  sendKeys(KEY_L,0x00,0x00);
  sendKeys(KEY_U,0x00,0x00);
  sendKeys(KEY_D,0x00,0x00);
  sendKeys(KEY_E,0x00,0x00);

  sendKeys(KEY_COMMA,KEY_MOD_LSHIFT,0x00);

  sendKeys(KEY_S,0x00,0x00);
  sendKeys(KEY_T,0x00,0x00);
  sendKeys(KEY_D,0x00,0x00);
  sendKeys(KEY_I,0x00,0x00);
  sendKeys(KEY_O,0x00,0x00);
  sendKeys(KEY_DOT,0x00,0x00);
  sendKeys(KEY_H,0x00,0x00);

  sendKeys(KEY_DOT,KEY_MOD_LSHIFT,0x00);

// typing '\n'

  sendKeys(KEY_BACKSLASH,0x00,0x00);
  sendKeys(KEY_N,0x00,0x00);

// void main(){
  sendKeys(KEY_V,0x00,0x00);
  sendKeys(KEY_O,0x00,0x00);
  sendKeys(KEY_I,0x00,0x00);
  sendKeys(KEY_D,0x00,0x00);

  sendKeys(KEY_SPACE,0x00,0x00);

  sendKeys(KEY_M,0x00,0x00);
  sendKeys(KEY_A,0x00,0x00);
  sendKeys(KEY_I,0x00,0x00);
  sendKeys(KEY_N,0x00,0x00);

  sendKeys(KEY_9,KEY_MOD_LSHIFT,0x00);
  sendKeys(KEY_0,KEY_MOD_LSHIFT,0x00);

  sendKeys(KEY_LEFTBRACE,KEY_MOD_LSHIFT,0x00);

// printf("Hello World\\n");}
  sendKeys(KEY_P,0x00,0x00);
  sendKeys(KEY_R,0x00,0x00);
  sendKeys(KEY_I,0x00,0x00);
  sendKeys(KEY_N,0x00,0x00);
  sendKeys(KEY_T,0x00,0x00);
  sendKeys(KEY_F,0x00,0x00);

  sendKeys(KEY_9,KEY_MOD_LSHIFT,0x00);
  sendKeys(KEY_APOSTROPHE,KEY_MOD_LSHIFT,0x00);

  sendKeys(KEY_H,KEY_MOD_LSHIFT,0x00);
  sendKeys(KEY_E,0x00,0x00);
  sendKeys(KEY_L,0x00,0x00);
  sendKeys(KEY_L,0x00,0x00);
  sendKeys(KEY_O,0x00,0x00);

  sendKeys(KEY_SPACE,0x00,0x00);

  sendKeys(KEY_W,KEY_MOD_LSHIFT,0x00);
  sendKeys(KEY_O,0x00,0x00);
  sendKeys(KEY_R,0x00,0x00);
  sendKeys(KEY_L,0x00,0x00);
  sendKeys(KEY_D,0x00,0x00);
  sendKeys(KEY_BACKSLASH,0x00,0x00);
  sendKeys(KEY_BACKSLASH,0x00,0x00);
  sendKeys(KEY_N,0x00,0x00);

  sendKeys(KEY_APOSTROPHE,KEY_MOD_LSHIFT,0x00);
  sendKeys(KEY_0,KEY_MOD_LSHIFT,0x00);
  sendKeys(KEY_SEMICOLON,0x00,0x00);
  sendKeys(KEY_RIGHTBRACE,KEY_MOD_LSHIFT,0x00);
  sendKeys(KEY_APOSTROPHE,0x00,0x00);

// typing '> virus.c'

  sendKeys(KEY_DOT,KEY_MOD_LSHIFT,0x00);
  sendKeys(KEY_V,0x00,0x00);
  sendKeys(KEY_I,0x00,0x00);
  sendKeys(KEY_R,0x00,0x00);
  sendKeys(KEY_U,0x00,0x00);
  sendKeys(KEY_S,0x00,0x00);
  sendKeys(KEY_DOT,0x00,0x00);
  sendKeys(KEY_C,0x00,0x00);

// Done writing the program, now press enter to store it inside a source file

  sendKeys(KEY_ENTER,0x00,0x00);

// now compile it 

  sendKeys(KEY_G,0x00,0x00);
  sendKeys(KEY_C,0x00,0x00);
  sendKeys(KEY_C,0x00,0x00);

  sendKeys(KEY_SPACE,0x00,0x00);

  sendKeys(KEY_V,0x00,0x00);
  sendKeys(KEY_I,0x00,0x00);
  sendKeys(KEY_R,0x00,0x00);
  sendKeys(KEY_U,0x00,0x00);
  sendKeys(KEY_S,0x00,0x00);
  sendKeys(KEY_DOT,0x00,0x00);
  sendKeys(KEY_C,0x00,0x00);

  sendKeys(KEY_ENTER,0x00,0x00);
  
// Done compiling, now let's run it :
  
  sendKeys(KEY_DOT,0x00,0x00);
  sendKeys(KEY_SLASH,0x00,0x00);
  sendKeys(KEY_A,0x00,0x00);
  sendKeys(KEY_DOT,0x00,0x00);
  sendKeys(KEY_O,0x00,0x00);
  sendKeys(KEY_U,0x00,0x00);
  sendKeys(KEY_T,0x00,0x00);
  sendKeys(KEY_ENTER,0x00,0x00);

}

void loop() 
{ 


 
}
