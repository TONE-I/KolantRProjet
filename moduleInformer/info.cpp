#include "mbed.h"
#include "info.h"
#include "Grove_LCD_RGB_Backlight.h"
#define SLEEP_TIME 100ms // (msec)
DigitalOut alerteLEDE(D3);


void alerteLED(){
    alerteLEDE = !alerteLEDE;
}
void alerteLED_reset(){
    alerteLEDE = 0;
}
void afficherLCD(float donnee,int etat){
Grove_LCD_RGB_Backlight LCD(I2C_SDA, I2C_SCL);
char channel[16];
char CO2[16];
LCD.locate(0,0);
LCD.print("etat de la piece");
LCD.locate(0,1);
sprintf(channel,"%0.00f Deg",donnee);
LCD.print(channel);
ThisThread::sleep_for(250ms);
printf(CO2,"%0.00f Deg",donnee);
LCD.print(CO2);
if (etat == 1)
{
   LCD.setRGB(0xff,0x00,0x00); 
   ThisThread::sleep_for(200ms);
   LCD.setRGB(0x00,0x00,0x00);
   ThisThread::sleep_for(200ms); 
}else
{
    LCD.setRGB(0xff,0xff,0xff);
}

}