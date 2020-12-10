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
DigitalIn buton(D5);

int main() {
      
  while (true)
  {
    int a = buton;
    afficherLCD(a);
    if (buton == 1)
    {
    alerteLED();
     ThisThread::sleep_for(120ms);
    }else{
    alerteLED_OFF();
    ThisThread::sleep_for(120ms);
}
}    
}

