/* *
 * @file main.cpp
 * @brief main code du projet SNI-AIR
 * @author Carricart Léo 
 * @version 1.0
 * @date 22/12/2020
 */

#include "mbed.h"
#include "info.h"
#include "mesure.h"
#include "ventilation.h"

#define SLEEP_TIME 200ms // (msec)

int main() {

float ppm; 
float temp; 

 while (true)
  {
    ppm = mesurerCO2();
    temp = mesurerTemp();
    if(ppm > 700.0 && temp > 21.0){
        OpenWin();
        alerteLED();
        afficherLCD(temp,ppm);
    }
    else if(temp < 21.0 || ppm < 700.0){
        CloseWin();
        alerteLED_reset();
        afficherLCD(temp,ppm);
    }


    else{
        afficherLCD(temp,ppm);
        alerteLED_reset();
    }
    alerteLED_reset();
  }
}
  