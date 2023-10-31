#include <Arduino.h>
#include <CarSemaphore.h>

CarSemaphore *semaphore;

void setup() {
    semaphore = new CarSemaphore(10000, 5000, 12000);
}

void loop() {
    semaphore->Start();
}