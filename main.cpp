/* *
 * @file main.cpp
 * @brief Basic Mbed 6 template file for SNIR students
 * @author sepro
 * @version 1.0
 * @date 04/11/2020
 */

#include "mbed.h"
<<<<<<< HEAD
#include "mesure.h"
#define SLEEP_TIME 1000ms // (msec)
DigitalOut led1(LED1);
float CO2;
int main() {
  while (true) {
    led1 = !led1;
    CO2=mesurerCO2();
    printf("%f ppm\n\r",CO2);
    ThisThread::sleep_for(SLEEP_TIME);
  }
=======
<<<<<<< HEAD
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
>>>>>>> origin/projet
}
}    



