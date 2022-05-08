//
// Created by micha on 06.05.2022.
//

#include "FuelInjector.h"
#include <stdlib.h>

FuelInjector::FuelInjector() {
    currentInjectSpeed = rand() % 100;
}
void FuelInjector::increaseInjectSpeed(int value) {
    currentInjectSpeed += value;
}

void FuelInjector::decreaseInjectSpeed(int value) {
    currentInjectSpeed -= value;

    if (currentInjectSpeed < 0)
        currentInjectSpeed = 0;
}

int FuelInjector::getCurrentInjectSpeed() {
    return currentInjectSpeed;
}


