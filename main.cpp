/**
 * @file main.cpp
 * @brief Basic template file for SNIR students
 * @author sepro
 * @version 1.0
 * @date 21/10/2019
 */
#include "ThisThread.h"
#include "Badge_Client/badge_client.h"
#include "Gyrophare/gyrophare.h"

#include "mbed.h"
#define SLEEP_TIME 500 // (msec)

Badge_Client monBadge(D1,D0); 
Gyrophare gyroVert(LED2);

int main() {
  bool badge_lu;
  // monGyro.clignoter(SLEEP_TIME);
  printf("*************************************************\r\n");
  printf("BIENVENUE AU PARKING DE LA HULOTTE  xD ;O \r\n");
  printf ("Etape 1\r\n");
  printf("*************************************************\r\n");

  while (true) {
    badge_lu = monBadge.lectureBadge();
    if (badge_lu) {
      printf("Numero de badge %s \r\n", monBadge.getBadgeNumber());
    }
  }
}
