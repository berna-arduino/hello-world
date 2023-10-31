#include <Arduino.h>
#include <CarSemaphoreLed.h>

#define DELAY 500

void CarSemaphoreLed::TurnOn() const {
    digitalWrite(_pin, HIGH);
    delay(_timeOn);
    digitalWrite(_pin, LOW);
}

CarSemaphoreLed::CarSemaphoreLed(int pin, int timeOn) {
    pinMode(pin, OUTPUT);
    _timeOn = timeOn;
    _pin = pin;
}

