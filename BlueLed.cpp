#include "Led.h"

BlueLed::BlueLed(int pin) : pin(pin) {}

void BlueLed::setup() {
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW); 
}

void BlueLed::turnOn() {
    digitalWrite(pin, HIGH);
    Serial.println("LED turned on");
}

void BlueLed::turnOff() {
    digitalWrite(pin, LOW);
    Serial.println("LED turned off");
}
