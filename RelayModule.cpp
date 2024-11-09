#include "RelayModule.h"

RelayModule::RelayModule(int pin) : pin(pin) {}

void RelayModule::setup() {
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW); // Inicialmente cerrado
}

void RelayModule::openValve() {
    digitalWrite(pin, HIGH);
    Serial.println("Valve opened");
}

void RelayModule::closeValve() {
    digitalWrite(pin, LOW);
    Serial.println("Valve closed");
}
