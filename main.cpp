/**
 * @file main.cpp
 * @brief main code Programme calcul de temps de passage pour simulation
 * @author Testa Tony 
 * @version 1.0
 * @date 22/03/2021
 */

#include "mbed.h"

Timer t;

DigitalOut Sortie1 = D0;
DigitalOut Sortie2 = D1;

//pour 130 km/h et empattement de 3 metres, laisser la boucle pour la distance inter vehicule pour les oscillos
int main()
{
    double empattement = 2.44; //empattement en metres
    double vitesse = 0.0;
    double rapport = 0.0;
    double timeP = 3600.0;
    double tuyau = 0.01;
    printf("debut prog\r\n");
    vitesse = 130.0; // vitesse en km/h
    rapport = vitesse / timeP;
    printf("vitesse en m/ms %lf \n\r", rapport);
    double tps1m = 1.0/rapport;
    printf("le temps pour parcourir un metre est: %lf ms \n\r", tps1m); 
    double tpsT = 0.1*tps1m;
    printf("temps de passage sur tuyau = %lf ms\n\r", tpsT);
    double tpsEmpattement = empattement*tps1m;
    printf("temps mesuré pour l'empattement = %lf ms\n\r", tpsEmpattement);
    int temps = static_cast<int>(tpsEmpattement);
    int tpstuyau = static_cast<int>(tpsT);
    int tps1metre = static_cast<int>(tps1m);
    printf("temps en int = %d\n\r", temps);
    printf("temps tuyau = %d\n\r", tpstuyau);
    printf("temps 1 metre = %d\n\r", tps1metre);
    Sortie1 = 1;
    Sortie2 = 0;
    ThisThread::sleep_for(tpstuyau);
    Sortie1 = 0;
    ThisThread::sleep_for(tps1metre-tpstuyau);
    Sortie2 = 1;
    ThisThread::sleep_for(tpstuyau);
    Sortie2 = 0;
    ThisThread::sleep_for(temps);
    Sortie1 = 1;
    ThisThread::sleep_for(tpstuyau);
    Sortie1 = 0;
    ThisThread::sleep_for(tps1metre-tpstuyau);
    Sortie2 = 1;
    ThisThread::sleep_for(tpstuyau);
    Sortie2 = 0;

}
