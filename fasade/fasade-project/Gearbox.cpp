//
// Created by micha on 06.05.2022.
//

#include "Gearbox.h"

Gearbox::Gearbox(int maxGear) {
    maxGear = maxGear;
    currentGear = 1;
}

void Gearbox::shiftGearUp(Engine *engine) {
    if (currentGear < maxGear) {
        engine->decreaseRPM(600);
        currentGear++;
    }
}

void Gearbox::shiftGearDown(Engine *engine) {
    if (currentGear > 1) {
        engine->increaseRPM(600);
        currentGear--;
    }
}

void Gearbox::adjustGear(Engine *engine) {
    if (engine->getRPM() > 2600) {
        shiftGearUp(engine);
    } else if (engine->getRPM() < 1300) {
        shiftGearDown(engine);
    }
}

int Gearbox::getCurrentGear() {
    return currentGear;
}

Gearbox::Gearbox() {
    currentGear = 1;
}
