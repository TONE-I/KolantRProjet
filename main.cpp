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
#include "CVehicule.h"


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
  CVehicule::CVehicule 1000tipla;
  1000tipla set_vitesse(60);
  

}
