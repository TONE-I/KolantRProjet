
/**
 * @file   ventilation.cpp
 * @brief  code du module Ventiler
 * @author Carricart Léo
 * @version 1.0
 * @date 22/12/2020
 */
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