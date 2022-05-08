//
// Created by micha on 06.05.2022.
//

#ifndef FASADE_PROJECT_COOLER_H
#define FASADE_PROJECT_COOLER_H


#include <string>
#include "CoolerPump.h"
#include "CoolerFan.h"

class Cooler {
    CoolerPump pump;
    CoolerFan fan;
    void increaseCooling();
    void decreaseCooling();
public:
    Cooler();
    void adjustCooling(int currentTemp);
    std::string getStatus();

};


#endif //FASADE_PROJECT_COOLER_H
