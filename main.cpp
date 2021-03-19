/**
 * @file main.cpp
 * @brief main code du projet SNI-AIR
 * @author Carricart Léo 
 * @version 1.0
 * @date 22/12/2020
 */

#include "mbed.h"

DigitalOut Sortie1 = D0;
DigitalOut Sortie2 = D1;

//pour 130 km/h et empattement de 3 metres, laisser la boucle pour la distance inter vehicule pour les oscillos
int main() {
int b = 1;
while(b == 1){

  Sortie1 = 1;
  Sortie2 = 0;

  wait_us(2700);
  Sortie1 = 0;
  wait_us((27700-2700));
  Sortie2 = 1;
  wait_us(2700);
  Sortie2 = 0;
  //empatement du vehicule = 3 metres
  wait_us(41500);
  wait_us(41500);
  Sortie1 = 1;
  wait_us(2700);
  Sortie1 = 0;
  wait_us((27700-2700));
  Sortie2 = 1;
  wait_us(2700);
  Sortie2 = 0;
  wait_us(41500);
  wait_us(41500);
  wait_us(41500);
  wait_us(41500);
  
}
}
  