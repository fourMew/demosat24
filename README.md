# ACC Demosat 2024 - Closed chamber O3 testing
A low budget payload for testing the effect of fluorocarbons/fluorocarbon like substances on ozone in the upper atmosphere.
 <br/>
 
# How to use this repo
clone the repo, either by running:
```sh
git clone https://github.com/fourMew/demosat24.git
```
or by downloading and extracting the zip:

![firefox_V28YIlp0Gu](https://github.com/fourMew/demosat24/assets/19920164/bc803591-2bec-41a3-9846-162a37c0c774)


## Arduino
To use this sketch you must download and install the [DFRobot_OzoneSensor library](https://codeload.github.com/DFRobot/DFRobot_OzoneSensor/zip/master)

*How do I [install an arduino library](https://www.arduino.cc/en/Guide/Libraries#.UxU8mdzF9H0)?*

<<<<<<< HEAD
From here you should be able to open the sketch with the Arduino IDE as normal :)
=======
From here you should be able to open the sketch with the Arduino IDE

This sketch currently supports:

 - Dual O3 sensors via I2C Addresses **0x73** and **0x72**
 - 1 SSCDANN150PGAA5 5v pressure sensor via analog pin **A3**
 - 1 3.3v temp sensor via analog pin **A0**
>>>>>>> aa75fdf (updated readme with sketch info)

## KiCAD
Open the KiCAD project file found at demosat24/pcb/shield/demosatShield.kicad_pro

Ensure that the symbols and footprints in the project specific library are properly loaded
