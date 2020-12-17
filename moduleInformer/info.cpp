#include "mbed.h"
#include "info.h"
#include "Grove_LCD_RGB_Backlight.h"
#define SLEEP_TIME 100ms // (msec)
DigitalOut alerteLEDE(D3);

//alerteLED afficherLCD
void alerteLED(){
    alerteLEDE = !alerteLEDE;
}
void alerteLED_OFF(){
    alerteLEDE = 0;
}
void afficherLCD(int test){
Grove_LCD_RGB_Backlight afficherLCD(I2C_SDA, I2C_SCL);
char channel[16];
afficherLCD.setRGB(0xff,0xff,0xff);
afficherLCD.locate(0,0);
afficherLCD.print("Etat de la piece");
afficherLCD.locate(0,1);
sprintf(channel,"%d",test);
afficherLCD.print(channel);
}


    


