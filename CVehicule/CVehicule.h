#ifndef CVehicule_H
#define CVehicule_H

using namespace std;
#include <vector.h>
#include "CEnumVehicule.h"

class CVehicule
{
    public:
    CVehicule(CEnumVehicule typeV, unsigned char vitesse, unsigned int nbreRepet, float fz);
    CVehicule();
    float get_fz();
    void set_fz(_fz);
    int get_vitesse();
    void set_vitesse(_vitesse);
    CEnumVehicule get_typeVehicule();
    void set_typeVehicule(_typeVehicule);
    vect<float> get_empattement();
    void set_empattement(vect<float> empattement);


    private:
    float _fz;
    int _vitesse;
    unsigned int _nbreSimulation;
    CEnumVehicule _typeVehicule;
    vect<float> _empattement;
}
#endif /* CVehicule */