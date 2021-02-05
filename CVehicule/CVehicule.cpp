#include "CVehicule.h"
#include <iostream>
using namespace std;


CVehicule::CVehicule(/** CEnumVehicule typeV **/, int vitesse,unsigned int nbreRepet , float frequence)
    vitesse = 0,
    nbreRepeat = 3,
    frequence = 2,
    {
        printf("nouveau Vehicule\r\n");
    }

    void CVehicule::set_vitesse(int vitesse){
        this-> _vitesse = vitesse;
    }
    int CVehicule::get_vitesse(){
        return this -> _vitesse;
    }

    void CVehicule::afficherParam(){
        printf(_vitesse);
    }