/*
  LED.h - Library for creating and controlling LEDs
  Created by Sam Dicker on 10.7.2024
*/

#ifndef rgbLEDs_h
#define rgbLEDs_h

#include "Arduino.h"

class rgbLEDs{
    private:
        int RedPin;
        int GreenPin;
        int BluePin;
        int RedBrightness;
        int GreenBrightness;
        int BlueBrightness;
        long ms;
        long msOld;
        int LEDState;
        long tDelay;
        String Name;

        void initLED();

        void setms(long);
        void setmsOld(long);

        long getms();
        long getmsOld();

    public:
        rgbLEDs();
        rgbLEDs(int,int,int);
        rgbLEDs(int,int,int,String);
        rgbLEDs(int,int,int,long,String);

        void setRedPin(int);
        void setGreenPin(int);
        void setBluePin(int);
        void setRedBrightness(int);
        void setGreenBrightness(int);
        void setblueBrightness(int);
        void setLEDState(int);
        void settDelay(long);
        void setName(String);

        int getRedPin();
        int getGreenPin();
        int getBluePin();
        int getRedBrightness();
        int getGreenBrightness();
        int getBlueBrightness();
        int getLEDState();
        long gettDelay();
        String getName();

        void rgbLEDOn(bool, bool, bool);
        void rgbLEDOff();
        void blinkRGBLED(bool, bool, bool);
        void rgbRainbow();
        void rgbFade();
    };
#endif