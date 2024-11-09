#include "UltraSonicSensor.h"

UltraSonicSensor::UltraSonicSensor(int trigPin, int echoPin) : trigPin(trigPin), echoPin(echoPin) {}

void UltraSonicSensor::setup() {
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

float UltraSonicSensor::readDistanceCM() {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    int duration = pulseIn(echoPin, HIGH);
    return duration * 0.034 / 2;
}
