//
// Created by micha on 06.05.2022.
//

#include "CoolerFan.h"

CoolerFan::CoolerFan() {
    currentRPM = 1000;
}

void CoolerFan::increaseRPM(int value) {
    currentRPM += value;
}

void CoolerFan::decreaseRPM(int value) {
    currentRPM -= value;

    if (currentRPM < 0)
        currentRPM = 0;
}

int CoolerFan::getCurrentRPM() {
    return currentRPM;
}
