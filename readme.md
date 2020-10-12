# Modele de projet 

- Langage C
- Microcontrôleur Mbed
- Chaine de compilation croisée (i386 -> ARM)

## Branche master

Contient un squelette de projet à intégrer à VsCode

## Fichiers importants du projet template

**.vscode/launch.json** : Configuration de la chaîne de développement (gcc-arm, JLink)

**.vscode/tasks.json** : Appel à cmbed-cli et ses arguments

**Jenkinsfile** : Fichier de configuration Jenkins pour l'intégration continue

**main.cpp** : Fichier source principal du projet

**mbed-os.lib** : Adresse de la version de mbed-os à télécharger

**STM32F7x6.svd** : Fichier de définition du microcontroleur. Permet une vision des registres de celui-ci.

## QuickStart

- Cloner le projet

```shell
git clone http://gogs.lyceekastler.fr/II_Mbed/Mbed5_template_jlink.git <NOM_PROJET>
```

- Se déplacer dans le répertoire du projet

```shell
cd <NOM_PROJET>
```

- Mettre à jour mbed-os

```shell
mbed update
```

- Ouvrir le dossier dans VsCODE

## Ressources Moodle

### Installation MBED

- [Installation Mbed et VSCode (Sous Ubuntu)](http://moodle.lyceekastler.fr/mod/page/view.php?id=1392)

- [Installation MBED et VSCODE (sous Windows)](http://moodle.lyceekastler.fr/mod/page/view.php?id=1394)

### Gestion de projets et documentation MBED

- [Informatique embarquée avec MBED](http://moodle.lyceekastler.fr/course/view.php?id=112)

- [Créer et gérer les projets mbed](http://moodle.lyceekastler.fr/mod/wiki/view.php?id=1021)

- [Configurer et utiliser VSCode](http://moodle.lyceekastler.fr/mod/wiki/view.php?id=1022)