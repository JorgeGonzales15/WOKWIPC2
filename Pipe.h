#ifndef PIPE_H
#define PIPE_H

#include "UltraSonicSensor.h"
#include "RelayModule.h"
#include "BlueLed.h"

class Pipe {
public:
    Pipe(UltraSonicSensor* ultrasonicSensor, RelayModule* relayModule, BlueLed* led);
    void setup();
    void loop();

private:
    UltraSonicSensor* ultrasonicSensor;
    RelayModule* relayModule;
    BlueLed* led;
};

#endif