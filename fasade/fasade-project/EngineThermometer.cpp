//
// Created by micha on 06.05.2022.
//

#include "EngineThermometer.h"
#include <stdlib.h>



EngineThermometer::EngineThermometer() {
    EngineThermometer::engineTemperature = EngineThermometer::getUpdatedTemperature();
}

int EngineThermometer::getUpdatedTemperature() {
    return rand() % 100 + 20;
}

int EngineThermometer::getTemperature() {
    EngineThermometer::engineTemperature = EngineThermometer::getUpdatedTemperature();
    return engineTemperature;
}
