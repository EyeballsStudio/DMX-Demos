/*-----------------------------------
DMX Proto Shield demo
Test RGB mapping
Platform: Uno  
DMX adres: 10
DMX range: 3

Maps an RGB LED to 3 DMX channels using pulse width modulation

DMX Shield, library and code by Eyeballs Studio
http://eyeballs-studio.blogspot.com
https://github.com/EyeballsStudio

Copyright (C) 2017 Koen Van Baelen

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see https://opensource.org/licenses
------------------------------------*/

#include <EyeballsDMX.h>
#include <Servo.h>

//Output pins
#define PORT_RED 3
#define PORT_GREEN 5
#define PORT_BLUE 6

//DMX reader object with starting address 10 and range of 3 adresses
EyeballsDMX dmxReader(10,3);

void setup() {
  dmxReader.begin();
  //Set pins as output
  pinMode(PORT_RED, OUTPUT);
  pinMode(PORT_GREEN, OUTPUT);
  pinMode(PORT_BLUE, OUTPUT); 
  //Map pins to DMX channels
  dmxReader.mapPwm(PORT_RED,10);
  dmxReader.mapPwm(PORT_GREEN,11);
  dmxReader.mapPwm(PORT_BLUE,12);
}

void loop() {
  dmxReader.execute(); 
}


