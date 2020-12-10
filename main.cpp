/* *
 * @file main.cpp
 * @brief Basic Mbed 6 template file for SNIR students
 * @author sepro
 * @version 1.0
 * @date 04/11/2020
 */

#include "mbed.h"
#include "ventilation.h"
DigitalOut led1(LED1);
DigitalIn button(USER_BUTTON);

int main() {
  while (true) {
    printf("LO SNIR \r\n");
    led1 = !led1;
    if(button == 1){
    OpenWin();
    }
    else{
    CloseWin();
    }
    ThisThread::sleep_for(100ms); 
  }
}
