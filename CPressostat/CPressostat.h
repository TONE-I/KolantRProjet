#ifndef CPressostat_H
#define CPressostat_H
#include <iostream>
#include <mbed.h>

using namespace std;

class CPressostat
{
public:
    CPressostat();
    ~CPressostat();
    CPressostat(PinName pinPressostat);
    void simuler();

private:
    PinName pinPressostat;
};

#endif /* CPressostat */
