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

#ifndef blink_L
#define blink_L

#include "Arduino.h"

 class blk_L 
 {
       public:
                blk_L(int pin);
                void blk_delay(int ms);
    
       private:
               int _pin;
  };
  
#endif
