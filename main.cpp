/**
 * @file main.cpp
 * @brief Basic template file for SNIR students
 * @author sepro
 * @version 1.0
 * @date 21/10/2019
 */
#include "mbed.h"
#include "ThisThread.h"
#define SLEEP_TIME                  100ms // (msec)
DigitalOut led1(LED1);
int main()
{
    while (true) {
        printf("LO SNIR \r\n");
        led1 = !led1;

        ThisThread::sleep_for(SLEEP_TIME);
    }
}
