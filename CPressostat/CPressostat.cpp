#include "CPressostat.h"
#include "mbed.h"
#include <iostream>
#include "CConfig.h"

using namespace std;

CPressostat::CPressostat(PinName pinPressostat) : pinPressostat(pinPressostat)
{
    printf("Nouveau Pressostat\r\n");
}
CPressostat::~CPressostat()
{
    printf("Pressostat detruit\r\n");
}
