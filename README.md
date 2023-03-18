
# Open-Source Foot Pedal Project

This is an open source foot pedal leveraging the arduino keyboard library to provide a robust fully customizable foot pedal solution

## Badges

[![Accessibility in Mind](https://img.shields.io/badge/Accessibility-in%20Mind-blue)]() [![Printables Available](https://img.shields.io/badge/Printables-Available-brightgreen)](https://www.printables.com/model/425106-foot-pedal)
[![Right to Repair](https://img.shields.io/badge/Right-To%20Repair-orange)]()


## Features

- Modular
- Direct Access to the hardware
- cheap
- Cross platform(compatible with all currently available Operating Systems)
- easily extendable case design for use with more then the default 4 pedals
- Ease of Repair

## Arduino Pinout

![ArduinoPinout](https://github.com/merlinlcb/OFP-Project/blob/main/ArduinoPinout.png)

## Usage/Examples

- Download [main.ino](https://github.com/merlinlcb/OFP-Project/blob/main/main.ino)
- Go [Here](https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardmodifiers/ ) for basic information on using the arduino keyboard library
- Define your Pedals here
```c
int pedal1 = 9; 
int pedal2 = 7; 
int pedal3 = 5; 
int pedal4 = 3; 
```



- Define your Key Presses here
##### if you dont intend to use keypedalX_2 or X_3 set it to 'none'
```c
int keypedal1 = KEY_LEFT_GUI;
int keypedal1_2 = '2';
int keypedal1_3 = 'none';
int keypedal2 = KEY_LEFT_GUI;
int keypedal2_2 = '4';
int keypedal2_3 = 'none';
int keypedal3 = KEY_LEFT_GUI;
int keypedal3_2 = KEY_LEFT_SHIFT;
int keypedal3_3 = '4';
int keypedal4 = 'b';
int keypedal4_2 = 'none';
int keypedal4_3 = 'none';
```


## Authors

- [@merlinlcb](https://github.com/merlinlcb)
