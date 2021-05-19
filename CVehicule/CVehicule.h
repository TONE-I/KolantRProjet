/**
 * @file CVehicule.h
 * @brief Classe CVehicule
 * @author Tony Testa
 * @version 1.0
 * @date 03/03/2021
 */
#ifndef CVehicule_H
#define CVehicule_H
#include <iostream>
#include "CEnumVehicule.h"

using namespace std;
#include <vector>
//#include <CVehicule.h>
class CVehicule
{
public:
    CVehicule();
    CVehicule(CEnumVehicule typeVehicule, int vitesse, unsigned int nbreRepet, float frequence, double empattement);//, double empattement);
    ~CVehicule();
    float get_frequence();
    void set_frequence(float frequence);
    int get_vitesse();
    void set_vitesse(int vitesse);
    CEnumVehicule get_typeVehicule();
    void set_typeVehicule(CEnumVehicule typeVehicule);
    double get_empattement();
    void set_empattement(double empattement);
    void afficherParam();

private:
    int _vitesse;
    unsigned int _nbreRepet;
    CEnumVehicule _typeVehicule;
    float _frequence;
   double _empattement;
};
#endif /* CVehicule */