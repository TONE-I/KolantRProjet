#include "CVehicule.h"
#include "CEnumVehicule.h"
#include <iostream>
using namespace std;

CVehicule::CVehicule() : _typeVehicule(CEnumVehicule::PL), _vitesse(25), _nbreRepet(5), _frequence(5.00), _empattement(3.55)
{
    printf("nouveau Vehicule\r\n");
}

CVehicule::CVehicule(CEnumVehicule typeVehicule, int vitesse, unsigned int nbreRepet, float frequence, double empattement) : _typeVehicule(typeVehicule), _vitesse(vitesse), _nbreRepet(nbreRepet), _frequence(frequence),_empattement(empattement)
{
    printf("nouveau Vehicule\r\n");
}

void CVehicule::set_typeVehicule(CEnumVehicule typeVehicule)
{
    this->_typeVehicule = typeVehicule;
}

CEnumVehicule CVehicule::get_typeVehicule()
{
    return this->_typeVehicule;
}

void CVehicule::set_vitesse(int vitesse)
{
    this->_vitesse = vitesse;
}

int CVehicule::get_vitesse()
{
    return this->_vitesse;
}

void CVehicule::set_frequence(float frequence)
{
    this->_frequence = frequence;
}
float CVehicule::get_frequence()
{
    return this->_frequence;
}

void CVehicule::set_empattement(double empattement){
    this->_empattement = empattement;
}
//
double CVehicule::get_empattement(){
    return this->_empattement;
}

void CVehicule::afficherParam()
{
    if (_typeVehicule == CEnumVehicule::PL)
    {
        printf("Type : Poids Lourd\r\n");
    }
    else
    {
        printf("Type : Vehicule Leger\r\n");
    }
  //  printf("%f",_empattement);
    //printf("M \r\n");
    printf("%d", _vitesse);
    printf(" KM/H \r\n");
    printf("%f", _frequence);
    printf(" Hz\r\n");
}

CVehicule::~CVehicule()
{
    printf("Vehicule detruit\r\n");
}