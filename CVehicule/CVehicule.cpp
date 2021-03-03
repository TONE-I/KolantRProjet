#include "CVehicule.h"
#include <iostream>
using namespace std;

CVehicule::CVehicule():_vitesse(25), _nbreRepet(5), _frequence(5.00)
    {
        printf("nouveau Vehicule\r\n");
    }   

    CVehicule::CVehicule(unsigned char vitesse, unsigned int nbreRepet, float frequence):_vitesse(vitesse), _nbreRepet(nbreRepet), _frequence(frequence)
    {
        printf("nouveau Vehicule\r\n");
    } 

    void CVehicule::set_vitesse(int vitesse)
    {
        this-> _vitesse = vitesse;
    }

    int CVehicule::get_vitesse(){
        return this -> _vitesse;
    }

    void CVehicule::set_frequence(float frequence){
        this-> _frequence = frequence;
    }
    float CVehicule::get_frequence(){
        return this -> _frequence;
    }

    void CVehicule::afficherParam(){
        printf("%d",_vitesse);
        printf(" KM/H \r\n");
        printf("%f",_frequence);
        printf(" Hz\r\n");
    }

    CVehicule::~CVehicule()
    {
        printf("Vehicule detruit\r\n");
    }