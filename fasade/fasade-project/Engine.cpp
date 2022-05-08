//
// Created by micha on 06.05.2022.
//

#include "Engine.h"
#include <stdlib.h>

Engine::Engine() {
    Engine::currentRPM = 1600;
    Engine::thermometer = EngineThermometer();
}

void Engine::increaseRPM(int value) {
    Engine::currentRPM += value;
}

void Engine::decreaseRPM(int value) {
    Engine::currentRPM -= value;
    if (currentRPM < 0) {
        currentRPM = 0;
    }
}

int Engine::getRPM() {
    return currentRPM;
}

int Engine::getTemp() {
    return thermometer.getTemperature();
}

