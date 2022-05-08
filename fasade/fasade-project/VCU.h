//
// Created by micha on 06.05.2022.
//

#ifndef FASADE_PROJECT_VCU_H
#define FASADE_PROJECT_VCU_H


#include "Engine.h"
#include "Gearbox.h"
#include "Cooler.h"
#include "FuelInjector.h"
#include "Speedometer.h"

class VCU {
    Engine engine;
    Gearbox gearbox;
    Cooler cooler;
    FuelInjector fuelInjector;
    Speedometer speedometer;
public:
    VCU();
    void speedUp(int value);
    void slowDown(int value);
    void showStats();

};


#endif //FASADE_PROJECT_VCU_H
