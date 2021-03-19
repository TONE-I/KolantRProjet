/**
 * @file CVehicule.h
 * @brief Classe CVehicule
 * @author Tony Testa
 * @version 1.0
 * @date 03/03/2021
 */
#ifndef CSimulateurVehicule_H
#define CSimulateurVehicule_H
#include <iostream>

using namespace std;
#include <vector>
#include <CVehicule.h>
#include <CPressostat.h>
#include <CConfig.h>
class CSimulateurVehicule
{
public:
    CSimulateurVehicule(CConfig config);
    ~CSimulateurVehicule();
    chargerScenario();
    lancerScenario();
    simulerPL();
    simulerVL();
    stopperSimulation() : _simulerPressostat();

private:
    CPressostat pressostat1;
    CPressostat pressostat2;
    CConfig *config;
    CVehicule *vl;
    CVehicule *pl;
    //CScenarioManager _scenarioManager;
};
#endif /* CSimulateurVehicule */