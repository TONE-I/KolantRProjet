/* *
 * @file main.cpp
 * @brief Basic Mbed 6 template file for SNIR students
 * @author sepro
 * @version 1.0
 * @date 04/11/2020
 */

#include "mbed.h"

#include "info.h"

#define SLEEP_TIME 200ms // (msec)
InterruptIn buton(D5);

int main() {
   
    int etat = 0; 
    etat = buton;
  while (true)
  {
    int a = buton;
    afficherLCD(a,etat);
    if (buton == 1)
    {
    alerteLED();
    etat = 1;
     ThisThread::sleep_for(120ms);
    }else{
    alerteLED_reset();
    etat =0;
    ThisThread::sleep_for(120ms);
}
}
}