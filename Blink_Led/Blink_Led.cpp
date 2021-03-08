/*
   Blink LED  - Library
   
   Author: Eng. Renato Augusto
      
   Github: https://github.com/renatoaugustii/get_button_time
   Attribution-Non-Commercial - Subject to legal penalties
   
   **  VERSION CONTROLLER **
   Version: 1.0 - By Renato Augusto
   Date: Belo Horizonte - MG / Brasil 
   
   Any Question send me a email:
   renato.augusto.correa@outlook.com

*/

#include "Arduino.h"
#include "Blink_Led.h"

blk_L::blk_L(int pin){
	pinMode(pin,OUTPUT);
    _pin = pin;

  }

void blk_L::blk_delay(int ms){
    digitalWrite(_pin,HIGH);
    delay(ms);
    digitalWrite(_pin,LOW);
    delay(ms);
  }
