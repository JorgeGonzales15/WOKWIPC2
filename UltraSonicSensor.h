#ifndef ULTRASONIC_SENSOR_H
#define ULTRASONIC_SENSOR_H

#include <Arduino.h>

class UltraSonicSensor {
public:
    UltraSonicSensor(int trigPin, int echoPin);
    void setup();
    float readDistanceCM();

private:
    int trigPin;
    int echoPin;
};

#endif