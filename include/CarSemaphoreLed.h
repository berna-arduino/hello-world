#ifndef HELLO_WORLD_LED_H
#define HELLO_WORLD_LED_H

class CarSemaphoreLed {

private:
    int _pin;
    int _timeOn;

public:
    void TurnOn() const;

    explicit CarSemaphoreLed(int pin, int timeOn);
};

#endif
