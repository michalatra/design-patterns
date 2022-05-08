//
// Created by micha on 06.05.2022.
//

#include "VCU.h"
#include <iostream>

VCU::VCU() {
    engine = Engine();
    gearbox = Gearbox(6);
    cooler = Cooler();
    fuelInjector = FuelInjector();
    speedometer = Speedometer();
}

void VCU::speedUp(int value) {
    fuelInjector.increaseInjectSpeed(value*50);
    engine.increaseRPM(value * 100);
    speedometer.increaseSpeed(value);
    cooler.adjustCooling(engine.getTemp());
    gearbox.adjustGear(&engine);
}

void VCU::slowDown(int value) {
    fuelInjector.decreaseInjectSpeed(value*50);
    engine.decreaseRPM(value * 100);
    speedometer.decreaseSeed(value);
    cooler.adjustCooling(engine.getTemp());
    gearbox.adjustGear(&engine);
}

void VCU::showStats() {
    std::cout<<"---------------Engine---------------\n";
    std::cout<<"RPM: "<<engine.getRPM()<<"\nTemp: "<<engine.getTemp()<<"\n";

    std::cout<<"------------Speedometer------------\n";
    std::cout<<"Speed: "<<speedometer.getSpeed()<<"\n";

    std::cout<<"--------------Gearbox--------------\n";
    std::cout<<"Gear: "<<gearbox.getCurrentGear()<<"\n";

    std::cout<<"--------------Cooler---------------\n";
    std::cout<<cooler.getStatus();

    std::cout<<"-------------Injector--------------\n";
    std::cout<<"Inject speed: "<<fuelInjector.getCurrentInjectSpeed()<<"\n";
}
