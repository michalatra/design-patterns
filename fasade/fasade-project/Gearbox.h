//
// Created by micha on 06.05.2022.
//

#ifndef FASADE_PROJECT_GEARBOX_H
#define FASADE_PROJECT_GEARBOX_H


#include "Engine.h"

class Gearbox {
    int currentGear;
    int maxGear;
    void shiftGearUp(Engine* engine);
    void shiftGearDown(Engine* engine);
public:
    Gearbox();

    Gearbox(int maxGear);
    void adjustGear(Engine* engine);
    int getCurrentGear();
};


#endif //FASADE_PROJECT_GEARBOX_H
