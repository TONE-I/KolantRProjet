# Modele de projet 

- Langage C++
- Microcontrôleur Mbed
- Chaine de compilation croisée (i386 -> ARM)

## Branche projet

contient les modules et les fichier permettent de gerer l'aeration d'une salle de classe 

## Fichiers importants du projet MBED SN-AIR

**.vscode/launch.json** : Configuration de la chaîne de développement (gcc-arm, JLink)

**.vscode/tasks.json** : Appel à cmbed-cli et ses arguments

**Jenkinsfile** : Fichier de configuration Jenkins pour l'intégration continue

**main.cpp** : Fichier source principal du projet

**mbed-os.lib** : Adresse de la version de mbed-os à télécharger

**STM32F7x6.svd** : Fichier de définition du microcontroleur. Permet une vision des registres de celui-ci.

**moduleInformer** : module contenant les fichier info.h et
info.cpp permettant de gerer la communication via l'afficheure Grove LCD RGB Backlight

**moduleMesurer** : module contenant les fichier mesure.h et mesure.cpp permettant de prendre les mesure de concentration CO2 et de temperature

**moduleVentiler** : module contenant les fichier ventilation.h et ventilation.cpp permetant la gestion de servomoteur (ouvrir et fermer) 

## Documentation doxygen
**index.html**
