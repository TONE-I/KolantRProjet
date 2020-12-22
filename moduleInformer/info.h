/* *
 * @file info.h
 * @author Malta Dylan
 * @version 1.0
 * @date 22/12/2020
 */
#ifndef INFO_H
#define INFO_H

/**
 * @fn void afficherLCD(float donnee,float info)
 * @brief affiche la temperature et la concentration CO2
 * @param float donnee
 * @param float info
 * @return void
 */
void afficherLCD(float donnee,float info);

/**
 * @fn void alerteLED_reset()
 * @brief reset l'alerte 
 * @param void
 * @return void
 */
void alerteLED_reset();

/**
 * @fn void alerteLED()
 * @brief lance une alerte avec une LED et l'afficheur LCD
 * @param void
 * @return void
 */
void alerteLED();

#endif