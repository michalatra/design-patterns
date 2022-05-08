//
// Created by micha on 06.05.2022.
//

#include "Speedometer.h"

Speedometer::Speedometer() {
    currentSpeed = 0;
}

void Speedometer::increaseSpeed(int value) {
    currentSpeed += value;
}

void Speedometer::decreaseSeed(int value) {
    currentSpeed -= value;

    if (currentSpeed < 0) {
        currentSpeed = 0;
    }
}

int Speedometer::getSpeed() {
    return currentSpeed;
}
