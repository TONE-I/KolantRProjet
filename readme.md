# Mise en oeuvre afficheur tft adafruit 320*240 

- controler tft :  [ILI9341 (TFT controller)](http://www.adafruit.com/datasheets/ILI9341.pdf)
- controler touchscreen[STMPE610](http://www.adafruit.com/datasheets/STMPE610.pdf)
- ressources :
  - https://os.mbed.com/users/Rhyme/code/TS_Eyes/
  - https://learn.adafruit.com/adafruit-2-8-tft-touch-shield-v2/
  - https://learn.adafruit.com/adafruit-2-8-tft-touch-shield-v2/downloads
  - projet plus récent
  - https://os.mbed.com/teams/GraphicsDisplay/code/UniGraphic/

- GraphicsDisplay / UniGraphic  http://moodle.lyceekastler.fr/mod/wiki/view.php?id=1022)

Ajout des librairies 

- Motoo Tanaka/ SPI_STMPE610 (mbed add http://os.mbed.com/users/Rhyme/code/SPI_STMPE610/)
- Motoo Tanaka/ SPI_TFT_ILI9341(mbed add http://os.mbed.com/users/Rhyme/code/SPI_TFT_ILI9341/)
- Motoo Tanaka/ TFT_fonts (mbed add http://os.mbed.com/users/dreschpe/code/TFT_fonts/)
-  
- GraphicsDisplay / UniGraphic (mbed add http://os.mbed.com/teams/GraphicsDisplay/code/UniGraphic/)

Modification fichier c_cpp_properties.json

                "${workspaceFolder}/SPI_STMPE610/*",
                "${workspaceFolder}/SPI_TFT_ILI9341/*",
                "${workspaceFolder}/TFT_fonts/*",
                
                "${workspaceFolder}/UniGraphic/**",
modification des fichier de déclaration de fonts : modfication de __align(2) par MBED_ALIGN(2)



​    //modif Spe car pas de borche connecté pour le reset pas connecté

void SPI_TFT_ILI9341::tft_reset() ...

​    // if (_reset != NC)

​    // {

​    //     DigitalOut rst(_reset);

​    //     rst = 0;                       // display reset

​    //     wait_us(50);

​    //     rst = 1;                       // end hardware reset

​    // }