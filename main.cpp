/* *
 * @file main.cpp
 * @brief Basic Mbed 6 template file for SNIR students
 * @author sepro
 * @version 1.0
 * @date 04/11/2020
 */

#include "mbed.h"

#define SLEEP_TIME 100ms // (msec)
DigitalOut led1(LED1);

int main() {
  while (true) {
    printf("LO SNIR \r\n");
    led1 = !led1;

    
    ThisThread::sleep_for(SLEEP_TIME);
  }
}
