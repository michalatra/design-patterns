//
// Created by micha on 06.05.2022.
//

#ifndef FASADE_PROJECT_ENGINE_H
#define FASADE_PROJECT_ENGINE_H


#include "EngineThermometer.h"

class Engine {
    int currentRPM;
    EngineThermometer thermometer;
public:
    Engine();
    void increaseRPM(int value);
    void decreaseRPM(int value);
    int getRPM();
    int getTemp();
};


#endif //FASADE_PROJECT_ENGINE_H
