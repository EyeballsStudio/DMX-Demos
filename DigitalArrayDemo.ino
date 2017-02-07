/*-----------------------------------
DMX Proto Shield demo
Test digitale array mapping
Platform: Uno  
DMX adres: 10
DMX range: 1

Maps an array of 8 LED's to a single DMX channel
Useful for controlling an array of relay switches

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

//DMX Reader object with starting address 10 and range of 1 address
EyeballsDMX dmxReader(10,1);
//The array of output ports
int ports[8] = {1,2,3,4,5,6,7,8};

void setup() {
  dmxReader.begin();
  //Set pins as output
  for (int c = 0; c < 8; c++) pinMode(ports[c], OUTPUT);
  //Map the array of pins to DMX channel 10
  dmxReader.mapDigitalArray(ports,10);
}

void loop() {
  dmxReader.execute();
}


