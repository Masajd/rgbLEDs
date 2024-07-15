/*
  rgbLEDs.cpp - Library for creating and controlling LEDs
  Created by Sam Dicker on 10.7.2024
*/

#include "Arduino.h"
#include "rgbLEDs.h"

rgbLEDs::rgbLEDs(){
    RedPin = 1;
    GreenPin = 2;
    BluePin = 3;
    tDelay = 1000;
    Name = "Unnamed RGB LED";
    ms = 0;
    msOld = 0;
}

rgbLEDs::rgbLEDs(int RedPin, int GreenPin, int BluePin, String Name){
    this->RedPin = RedPin;
    this->GreenPin = GreenPin;
    this->BluePin = BluePin;
    this->tDelay = 1000;
    this->Name = Name;
    ms = 0;
    msOld = 0;
}

rgbLEDs::rgbLEDs(int RedPin, int GreenPin, int BluePin, long tDelay, String Name){
    this->RedPin = RedPin;
    this->GreenPin = GreenPin;
    this->BluePin = BluePin;
    this->tDelay = tDelay;
    this->Name = Name;
    ms = 0;
    msOld = 0;
}

void rgbLEDs::initLED(){

}

void 