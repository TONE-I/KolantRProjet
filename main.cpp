/**
 * @file main.cpp
 * @brief main code du projet SNI-AIR
 * @author Carricart Léo 
 * @version 1.0
 * @date 22/12/2020
 */

#include "mbed.h"

DigitalOut Sortie1 = D0;
DigitalOut Sort = D1;

//pour 130 km/h et empattement de 3 metres, laisser la boucle pour la distance inter vehicule pour les oscillos
int main()
{
    double empattement = 3;
    double vitesse = 0;
    double rapport = 0;
    double multiply = 0;
    double timeP = 3600;
    double tuyau = 0.01;
    printf("debut prog\r\n");
    vitesse = 130;
    rapport = vitesse / timeP;
    printf("un metre est parcouru en %lf \n\r", rapport);
    double tps1m = 1/rapport;
    printf("le temps pour parcourir un metre est: %lf ms \n\r", tps1m); 
    double tpsT = 0.01*tps1m;
    printf("temps de passage sur tuyau = %lf ms\n\r", tpsT);
    double tpsEmpattement = empattement*tps1m;
    printf("temps mesuré pour l'empattement = %lf ms\n\r", tpsEmpattement);

}
