#include "Pipe.h"

Pipe::Pipe(UltraSonicSensor* ultrasonicSensor, RelayModule* relayModule, BlueLed* led)
    : ultrasonicSensor(ultrasonicSensor), relayModule(relayModule), led(led) {}

void Pipe::setup() {
    ultrasonicSensor->setup();
    relayModule->setup();
    led->setup();
}

void Pipe::loop() {
    float distance = ultrasonicSensor->readDistanceCM();
    Serial.print("Measured distance: ");
    Serial.println(distance);

    if (distance < 10.0) {
        led->turnOn();
        relayModule->openValve();
        delay(5000); // Mantener la válvula abierta durante 5 segundos
    } else {
        led->turnOff();
        relayModule->closeValve();
    }
    delay(2500); // Imprimir datos cada 2.5 segundos
}