#include <Keyboard.h>
#include <KeyboardLayout.h>
#include <Keyboard_da_DK.h>
#include <Keyboard_de_DE.h>
#include <Keyboard_es_ES.h>
#include <Keyboard_fr_FR.h>
#include <Keyboard_it_IT.h>
#include <Keyboard_sv_SE.h>

//these pedals are defined as they correspond to where I soldered
//my pedals to the arduino pro micro
//you will need to swap these variables with where you soldered up your pedals using the provided board layout in the readme

int pedal1 = 9; //right
int pedal2 = 7; //center
int pedal3 = 5; //left
int pedal4 = 3; //unplugged

//if you dont intend to use keypedalX_2 or X_3 set it to 'none'
//for basic information on using the arduino keyboard library see 
//https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardmodifiers/ 


//!!!!! These are my presets for my usecase, they will highly likely be different for you!

int keypedal1 = KEY_LEFT_GUI;
int keypedal1_2 = '2';
int keypedal1_3 = 'none';
int keypedal2 = KEY_LEFT_GUI;
int keypedal2_2 = '4';
int keypedal2_3 = 'none';
int keypedal3 = KEY_LEFT_GUI;
int keypedal3_2 = KEY_LEFT_SHIFT;
int keypedal3_3 = '4';
int keypedal4 = 'b';
int keypedal4_2 = 'none';
int keypedal4_3 = 'none';

void setup() {

  pinMode(pedal1, INPUT_PULLUP);
  pinMode(pedal2, INPUT_PULLUP);
  pinMode(pedal3, INPUT_PULLUP);
  pinMode(pedal4, INPUT_PULLUP);

  Keyboard.begin();
}



void loop() {
    if (digitalRead(pedal1) == LOW)
    {
      Keyboard.press(keypedal1);
      if(keypedal1_2 != 'none'){
        Keyboard.press(keypedal1_2);
      }
      if(keypedal1_3 != 'none'){
        Keyboard.press(keypedal1_3);
      }
    }
    if (digitalRead(pedal1) == HIGH)
    {
      Keyboard.releaseAll();
    }
    if (digitalRead(pedal2) == LOW)
    {
      Keyboard.press(keypedal2);
      if(keypedal2_2 != 'none'){
        Keyboard.press(keypedal2_2);
      }
      if(keypedal2_3 != 'none'){
        Keyboard.press(keypedal2_3);
      }
    }
    if (digitalRead(pedal2) == HIGH)
    {
      Keyboard.releaseAll();
    }
    if (digitalRead(pedal3) == LOW)
    {
      Keyboard.press(keypedal3);
      if(keypedal3_2 != 'none'){
        Keyboard.press(keypedal3_2);
      }
      if(keypedal3_3 != 'none'){
        Keyboard.press(keypedal3_3);
      }
    }
    if (digitalRead(pedal3) == HIGH)
    {
      Keyboard.releaseAll();
    }
    if (digitalRead(pedal4) == LOW)
    {
      Keyboard.press(keypedal4);
      if(keypedal4_2 != 'none'){
        Keyboard.press(keypedal4_2);
      }
      if(keypedal4_3 != 'none'){
        Keyboard.press(keypedal4_3);
      }
    }
    if (digitalRead(pedal4) == HIGH)
    {
      Keyboard.releaseAll();
    }
}
