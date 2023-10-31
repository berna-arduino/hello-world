//
// Created by berna on 29/10/2023.
//

#ifndef HELLO_WORLD_CAR_SEMAPHORE_H
#define HELLO_WORLD_CAR_SEMAPHORE_H

#include "CarSemaphoreLed.h"

class CarSemaphore {
private:
    CarSemaphoreLed *_redLed;
    CarSemaphoreLed *_yellowLed;
    CarSemaphoreLed *_greenLed;

public:
    explicit CarSemaphore(int redTime = 3000, int yellowTime = 1000, int greenTime = 5000);

    void Start();
};

#endif //HELLO_WORLD_CAR_SEMAPHORE_H
