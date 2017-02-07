/*-----------------------------------
DMX Proto Shield demo
Test servo mapping
Platform: Uno  
DMX adres: 10
DMX range: 2

Maps two servos to two DMX channels

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

//DMX Reader object set at DMX address 10, with a range of 2 adresses
EyeballsDMX dmxReader(10,2);

void setup() {
  dmxReader.begin();
  //Maps servo 0 to output pin 2 and DMX channel 10
  dmxReader.mapServo(0,2,10);
  //Maps servo 1 to output pin 8 and DMX channel 11
  dmxReader.mapServo(1,8,11);
}

void loop() {
  dmxReader.execute();
}


