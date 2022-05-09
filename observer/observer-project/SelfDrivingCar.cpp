//
// Created by XPS-15 on 09.05.2022.
//

#include "SelfDrivingCar.h"
#include "TrafficLights.h"
#include <iostream>
#include <utility>

void SelfDrivingCar::update(EventEmitter *eventEmitter) {
    currentLightColor = ((TrafficLights*)eventEmitter)->getCurrentLight();
    run();
}

void SelfDrivingCar::run() {
    std::cout<<"-------------"<<name<<"--------------\n";

    if (currentLightColor == "green")
        std::cout<<"Pressing the gas pedal, green\n";
    else if (currentLightColor == "yellowRed")
        std::cout<<"Prepare for speed at yellow\n";
    else if (currentLightColor == "yellow")
        std::cout<<"Slowing down at yellow\n";
    else
        std::cout<<"Stop at red\n";
}

SelfDrivingCar::SelfDrivingCar(std::string name) : name(std::move(name)) {
    currentLightColor = "";
}
