#ifndef LED_H
#define LED_H

#include <Arduino.h>

class BlueLed {
public:
    BlueLed(int pin);
    void setup();
    void turnOn();
    void turnOff();

private:
    int pin;
};

#endif