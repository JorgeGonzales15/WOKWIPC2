#ifndef RELAY_MODULE_H
#define RELAY_MODULE_H

#include <Arduino.h>

class RelayModule {
public:
    RelayModule(int pin);
    void setup();
    void openValve();
    void closeValve();

private:
    int pin;
};

#endif
