/**
 * @file main.cpp
 * @brief Mise en oeuvre tft adafruit 320*240 
 * @author patrice Speziali
 * @version 1.0
 * @date 21/10/2020
 * @ressources  
 *  - 
 */

#include "mbed.h"
// Ajout pour gestion afficheur
#include "SPI_STMPE610.h"
#include "SPI_TFT_ILI9341.h"
#include "Arial12x12.h"
#include "Arial24x23.h"
#include "Arial28x28.h"
#include "font_big.h"



//affectation des broches pour la comunication spi
PinName Mosi = PE_14 ; //SPI4_MOSI; // bleu
PinName Miso = PE_13 ; // SPI4_MISO // blanc - Bleu
PinName Sclk = PE_12 ; // SPI4_SCK      //jaune
PinName CsTFT   = PE_11 ; // SPI4_SC    //orange

//affectation des broches de controle de l'afficheur
PinName RstTFT  = PF_13 ;               //blanc // non connecté
PinName DcTFT   = PE_9 ;                //vert
//PinName Busy = PF_12 ; // Non utilisé

PinName CS_TSC = PD_14 ;

PinName backLightTFT = PB_8 ;

DigitalOut doBackLightTFT (backLightTFT, 1);

SPI_TFT_ILI9341 TFT(Mosi, Miso, Sclk, CsTFT, RstTFT, DcTFT) ;
SPI_STMPE610 TSC(Mosi, Miso, Sclk, CS_TSC) ;

#define SLEEP_TIME                  1000 // (msec)
DigitalOut ledV(LED1);
DigitalOut ledB(LED2);
DigitalOut ledR(LED3);

int main()
{
    ledR = true ;
    ledB = false ;
    ledV = false ;


    //Configure the display driver
    TFT.background(Black);
    TFT.foreground(White);
    //wait(0.01) ;
    ThisThread::sleep_for(100);;
    TFT.cls();
    ledR = false ;

    TFT.set_font((unsigned char*) Arial12x12);
    TFT.foreground(Blue) ;
    TFT.locate(60, 10) ;
    TFT.printf("SART 2021") ;
    
    ledB = true ;
    int dx, px ;
    float delta = 0.0 ;
    dx = 0 ;
    px = 0 ;
  //  backlight = 0 ;
    TFT.background(Black);
    wait(0.1) ;
    TFT.foreground(White);
    wait(0.1) ;
    TFT.cls() ;
    wait(0.1) ;

    TFT.set_font((unsigned char*) Arial12x12);
    TFT.foreground(Blue) ;
    TFT.locate(60, 10) ;
    TFT.printf("<< kolantr >>") ;
    TFT.locate(30, 280) ;
    TFT.printf("Use FRDM touch slider") ;
    TFT.locate(30, 300) ;
    TFT.printf("Touch right edge to end") ;
    
    TFT.fillcircle(120, 160, 100, Green) ;
    TFT.fillcircle(60, 160, 50, Black) ;
    TFT.fillcircle(60, 160, 45, White) ;
    TFT.fillcircle(180, 160, 50, Black) ;
    TFT.fillcircle(180, 160, 45, White) ;
    TFT.fillcircle(60, 160, 5, Black) ;
    TFT.fillcircle(180, 160, 5, Black) ;

    int touched = 0 ;
    uint16_t x=0, y=0, z=0 ;
    while (true) {
        //printf("LO SNIR \r\n");
        //ledV = !ledV;
        touched = TSC.getRAWPoint(&x, &y, &z) ;
        if (touched) {

            printf("x = %d, y = %d, z = %d\n\r", x, y, z) ;
            ledB = !ledB ;
        }
        ThisThread::sleep_for(SLEEP_TIME);
        //ledB = !ledB ;
    }
}
