/**
 * @file main.cpp
 * @brief Basic template file for SNIR students
 * @author sepro
 * @version 1.0
 * @date 21/10/2019
 */

#include "mbed.h"
// Ajout pour gestion afficheur
#include "SPI_TFT_ILI9341.h"
#include "SPI_STMPE610.h"
#include "Arial12x12.h"
#include "Arial24x23.h"
#include "Arial28x28.h"
#include "font_big.h"

//#define PIN_MOSI        PTD2
//#define PIN_MISO        PTD3 
//#define PIN_SCLK        PTD1 
//#define PIN_CS_TFT      PTD0 
//#define PIN_DC_TFT      PTD5 
// #define PIN_BL_TFT      PTC9 
// #define PIN_CS_SD       PTA4 

// #define PIN_CS_TSC      PTA13
// #define PIN_TSC_INTR    PTC9

//affectation des broches pour la comunication spi
PinName Mosi = PE_14 ; //SPI4_MOSI; // bleu
PinName Miso = PE_13 ; // SPI4_MISO // blanc - Bleu
PinName Sclk = PE_12 ; // SPI4_SCK      //jaune
PinName CsTFT   = PE_11 ; // SPI4_SC    //orange

//affectation des broches de controle de l'afficheur
PinName RstTFT  = PF_13 ;               //blanc
PinName DcTFT   = PE_9 ;                //vert
//PinName Busy = PF_12 ; // Non utilisé

SPI_TFT_ILI9341 TFT(Mosi, Miso, Sclk, CsTFT, RstTFT, DcTFT) ;
//SPI_STMPE610 TSC(Mosi, Miso, Sclk, PIN_CS_TSC) ;

#define SLEEP_TIME                  100 // (msec)
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


    while (true) {
        printf("LO SNIR \r\n");
        ledV = !ledV;
        ThisThread::sleep_for(SLEEP_TIME);
        //ledB = !ledB ;
    }
}
