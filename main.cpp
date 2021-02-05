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
DigitalIn bouton(USER_BUTTON);
int bp = 0;

int main()

{
    ledR = true ;
    ledB = false ;
    ledV = false ;


    //Configure the display driver
    TFT.background(Blue);
    TFT.foreground(White);
    //wait(0.01) ;
    ThisThread::sleep_for(100);
    TFT.cls();
    ledR = false ;

    TFT.set_font((unsigned char*) Arial12x12);
    TFT.foreground(Black) ;
    TFT.locate(65, 10) ;
    TFT.printf("KolantR 2021") ;
    
    ledB = true ;
    int dx, px ;
    float delta = 0.0 ;
    dx = 0 ;
    px = 0 ;
  //  backlight = 0 ;
    TFT.background(Blue);
    wait(0.1) ;
    TFT.foreground(White);
    wait(0.1) ;
    TFT.cls() ;
    wait(0.1) ;

    TFT.set_font((unsigned char*) Arial24x23);
    TFT.foreground(Black) ;
    TFT.locate(45, 10) ;
    TFT.printf(" KolantR") ;
    TFT.foreground(Black) ;
    TFT.locate(25, 40) ;
    TFT.printf(" Simulation") ;
      TFT.set_font((unsigned char*) Arial24x23);
    TFT.foreground(White) ;
    TFT.locate(55, 90) ;
    TFT.printf("Option") ;
    TFT.locate(30, 150) ;
    TFT.set_font((unsigned char*) Arial12x12);
    TFT.printf(" 1 - Simulation Locale") ;
    TFT.locate(30, 250) ;
    TFT.printf(" 2 - Recevoir un Scenario") ;

}
