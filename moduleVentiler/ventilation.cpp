#include "ventilation.h"
#include "mbed.h"

PwmOut servo(D5);

void OpenWin(){
servo.period_ms(20);
servo.pulsewidth_us(2600);
ThisThread::sleep_for(1000ms);

}

void CloseWin(){
servo.period_ms(20);
servo.pulsewidth_us(1000);
ThisThread::sleep_for(1000ms);

}