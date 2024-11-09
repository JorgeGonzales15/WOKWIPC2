#include <Arduino.h>
#include "Pipe.h"
#include "UltraSonicSensor.h"
#include "RelayModule.h"
#include "BlueLed.h"

#define TRIG_PIN 14
#define ECHO_PIN 12
#define RELAY_PIN 5
#define LED_PIN 21

UltraSonicSensor ultrasonicSensor(TRIG_PIN, ECHO_PIN);
RelayModule relayModule(RELAY_PIN);
BlueLed led(LED_PIN);
Pipe pipe(&ultrasonicSensor, &relayModule, &led);

void setup() {
    Serial.begin(115200);
    Serial.println("Moen, Inc. - Smart Faucet Project");
    faucet.setup();
}

void loop() {
    faucet.loop();
}
