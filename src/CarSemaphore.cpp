//
// Created by berna on 29/10/2023.
//

#include <CarSemaphore.h>
#include <CarSemaphoreLed.h>

CarSemaphore::CarSemaphore(int redTime, int yellowTime, int greenTime) {
    _redLed = new CarSemaphoreLed(12, redTime);
    _yellowLed = new CarSemaphoreLed(11, yellowTime);
    _greenLed = new CarSemaphoreLed(10, greenTime);
}

void CarSemaphore::Start() {
    _greenLed->TurnOn();
    _yellowLed->TurnOn();
    _redLed->TurnOn();
}