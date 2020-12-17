#include "mbed.h"
#include "BME280.h"
#include "MQ135.h"
BME280 capteur(I2C_SDA, I2C_SCL);
MQ135 capteurO2(A0);

float mesurerCO2(){   
return capteurO2.getPPM();
}


float mesurerTemp(){
return capteur.getTemperature();
}
