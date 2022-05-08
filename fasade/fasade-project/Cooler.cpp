//
// Created by micha on 06.05.2022.
//

#include "Cooler.h"

Cooler::Cooler() {
    pump = CoolerPump();
    fan = CoolerFan();
}

void Cooler::increaseCooling() {
    fan.increaseRPM(50);
    pump.increaseCurrentFlow(100);
}

void Cooler::decreaseCooling() {
    fan.decreaseRPM(50);
    pump.decreaseCurrentFlow(100);
}

void Cooler::adjustCooling(int currentTemp) {
    if (currentTemp > 100) {
        increaseCooling();
    } else if (currentTemp < 70) {
        decreaseCooling();
    }
}

std::string Cooler::getStatus() {
    return "RMP: " + std::to_string(fan.getCurrentRPM()) + "\nFlow: " + std::to_string(pump.getCurrentFlow()) + "\n";
}
