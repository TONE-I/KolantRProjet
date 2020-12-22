/**
 * @file info.cpp
 * @brief code du module Informer
 * @author Malta dylan
 * @version 1.0
 * @date 22/12/2020
 */
#include "mbed.h"
#include "info.h"
#include "Grove_LCD_RGB_Backlight.h"
#define SLEEP_TIME 100ms // (msec)
DigitalOut alerteLEDE(D3);
Grove_LCD_RGB_Backlight LCD(I2C_SDA, I2C_SCL);


void alerteLED(){
    alerteLEDE = !alerteLEDE;
   LCD.setRGB(0xff,0x00,0x00); 
   ThisThread::sleep_for(200ms);
   LCD.setRGB(0x55,0x00,0x00);
   ThisThread::sleep_for(200ms); 
}
void alerteLED_reset(){
    alerteLEDE = 0;
}
void afficherLCD(float donnee,float info ){

char channel[16];
//char CO2[16];
LCD.setRGB(0xff,0xff,0xff);
LCD.clear();
LCD.locate(0,0);
LCD.print("etat de la piece");
LCD.locate(0,1);
sprintf(channel,"%0.00f Deg",donnee);
LCD.print(channel);
ThisThread::sleep_for(500ms);
LCD.clear();
LCD.locate(0,0);
LCD.print("etat de la piece");
LCD.locate(0,1);
sprintf(channel,"%0.00f ppm",info);
LCD.print(channel);
ThisThread::sleep_for(500ms);


}