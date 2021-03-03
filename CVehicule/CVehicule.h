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

using namespace std;
#include <vector>
#include <CVehicule.h>
class CVehicule
{
    public:
    CVehicule();
    CVehicule(/** CEnumVehicule typeV, **/ unsigned char vitesse, unsigned int nbreRepet, float frequence);
    ~CVehicule();
    float get_frequence();
    void set_frequence(float frequence);
    int get_vitesse();
    void set_vitesse(int vitesse);
    //CEnumVehicule get_typeVehicule();
    //void set_typeVehicule(CEnumVehicule typeVehicule);
    vector<float> get_empattement();
    void set_empattement(vector<float> empattement);
    void afficherParam();

    private:
    float _frequence;
    int _vitesse;
    unsigned int _nbreRepet;
    //CEnumVehicule _typeVehicule;
    vector<float> _empattement;
};
#endif /* CVehicule */