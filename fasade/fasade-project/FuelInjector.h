//
// Created by micha on 06.05.2022.
//

#ifndef FASADE_PROJECT_FUELINJECTOR_H
#define FASADE_PROJECT_FUELINJECTOR_H


class FuelInjector {
    int currentInjectSpeed;
public:
    FuelInjector();
    void increaseInjectSpeed(int value);
    void decreaseInjectSpeed(int value);
    int getCurrentInjectSpeed();
};


#endif //FASADE_PROJECT_FUELINJECTOR_H
