/**************************************************************************/
/*!
@file     MQ135.h
@author   G.Krocker (Mad Frog Labs)
@license  GNU GPLv3

First version of an Arduino Library for the MQ135 gas sensor
TODO: Review the correction factor calculation. This currently relies on
the datasheet but the information there seems to be wrong.

@section  HISTORY

v1.0 - First release
*/
/**************************************************************************/
#ifndef MQ135_H
#define MQ135_H

#include "mbed.h"

/// The load resistance on the board
#define RLOAD 10.0

/// Calibration resistance at atmospheric CO2 level
//#define RZERO 76.63
//#define RZERO 4244.623 //nouvelle valeur en kOhm ?
//#define RZERO 4272096.00 //nouvelle valeur en Ohm ?
#define RZERO 1697655.875000
/// Parameters for calculating ppm of CO2 from sensor resistance
#define PARA 116.6020682
#define PARB 2.769034857

/// Parameters to model temperature and humidity dependence
#define CORA 0.00035
#define CORB 0.02718
#define CORC 1.39538
#define CORD 0.0018

/// Atmospheric CO2 level for calibration purposes
//#define ATMOCO2 397.13
#define ATMOCO2 409.50  //Valeur Aout 2020 de www.esrl.noaa.gov/

class MQ135 {
 private:
  //PinName _pin;
  AnalogIn  _ain;
  //AnalogIn &_ain; 

 public:
  MQ135(PinName pin);
  ~MQ135();
  float getCorrectionFactor(float t, float h);
  float getResistance();
  float getCorrectedResistance(float t, float h);
  float getPPM();
  float getCorrectedPPM(float t, float h);
  float getRZero();
  float getCorrectedRZero(float t, float h);
};


#endif