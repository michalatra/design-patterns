//
// Created by XPS-15 on 09.05.2022.
//

#ifndef OBSERVER_PROJECT_SELFDRIVINGCAR_H
#define OBSERVER_PROJECT_SELFDRIVINGCAR_H

#include <string>
#include "Observer.h"

class SelfDrivingCar : public Observer {
    std::string currentLightColor;
    std::string name;
public:
    SelfDrivingCar(std::string name);

    void update(EventEmitter *eventEmitter) override;
    void run();
};


#endif //OBSERVER_PROJECT_SELFDRIVINGCAR_H
