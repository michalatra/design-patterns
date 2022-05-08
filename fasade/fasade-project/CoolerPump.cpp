//
// Created by micha on 06.05.2022.
//

#include "CoolerPump.h"
#include <stdlib.h>

CoolerPump::CoolerPump() {
    currentFlow = rand() % 100;
}

void CoolerPump::increaseCurrentFlow(int value) {
    currentFlow += value;
}

void CoolerPump::decreaseCurrentFlow(int value) {
    currentFlow -= value;

    if (currentFlow < 0)
        currentFlow = 0;
}

int CoolerPump::getCurrentFlow() {
    return currentFlow;
}
