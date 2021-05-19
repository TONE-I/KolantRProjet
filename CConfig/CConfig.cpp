#include "CVehicule.h"
#include "CConfig.h"
#include "CEnumSimulation.h"
#include "CEnumVehicule.h"
#include <iostream>
using namespace std;

CConfig::CConfig() : _VL(), _PL(), _typeSimulation(CEnumSimulation::pressostat1), _limitationVitesse(30), pinPressostat1(PB_8), pinPressostat2(PB_9)

{
}

CConfig::CConfig(CVehicule VL, CVehicule PL, CEnumSimulation typeSimulation, unsigned char limitVit, PinName pinP1, PinName pinP2) : _VL(VL), _PL(PL), _typeSimulation(typeSimulation), _limitationVitesse(limitVit), pinPressostat1(pinP1), pinPressostat2(pinP2)
{
    printf("Le la simulation est crée \r\n");
}

void CConfig::set_limitationVitese(unsigned char limitVit)
{
    this->_limitationVitesse = limitVit;
}

unsigned char CConfig::get_limitationVitesse()
{
    return this->_limitationVitesse;
}

void CConfig::setTypeSimulation(CEnumSimulation typeSimulation)
{
    _typeSimulation = typeSimulation;
}

CEnumSimulation CConfig::getTypeSimulation()
{
    return this->_typeSimulation;
}
//void setPinPressostat1(PinName)

void CConfig::setPinPressostat1(PinName pinP1)
{
    this->pinPressostat1 = pinP1;
}

void CConfig::setPinPressostat2(PinName pinP2)
{
    this->pinPressostat2 = pinP2;
}

void CConfig::afficherParam()
{
    if (_typeSimulation == CEnumSimulation::pressostat2)
    {
        printf("Simulation à 2 pressostats\r\n");
    }
    else
    {
        printf("Simulation à 1 pressostat\r\n");
    };
    printf("Limité à %d km/h\r\n", _limitationVitesse);
}

CConfig::~CConfig()
{
    printf("La simulation est arretée\r\n");
}
