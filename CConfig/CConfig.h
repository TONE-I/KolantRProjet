#ifndef CConfig_H
#define CConfig_H
#include <iostream>

using namespace std;
#include <vector>
#include <CVehicule.h>
#include "CEnumSimulation.h"
#include "mbed.h"

class CConfig
{
    public:

        CConfig();
        CConfig(CVehicule VL, CVehicule PL ,CEnumSimulation typeSimulation, unsigned char limitVit, PinName pinP1, PinName pinP2);
        ~CConfig();
        CEnumSimulation getTypeSimulation();
        void setTypeSimulation(CEnumSimulation typeSimulation);
        void setPinPressostat1(PinName pinPressostat1);
        void setPinPressostat2(PinName pinPressostat2);
        unsigned char get_limitationVitesse();
        void set_limitationVitese(unsigned char _limitationVitesse);
        void afficherParam();

    private:

        CVehicule _VL;
        CVehicule _PL;
        CEnumSimulation _typeSimulation;
        unsigned char _limitationVitesse;
        PinName pinPressostat1;
        PinName pinPressostat2;

};
#endif /* CConfig */