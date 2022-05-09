//
// Created by XPS-15 on 09.05.2022.
//

#ifndef OBSERVER_PROJECT_TRAFFICLIGHTS_H
#define OBSERVER_PROJECT_TRAFFICLIGHTS_H

#include <string>
#include <vector>
#include "EventEmitter.h"

class TrafficLights : public EventEmitter {
    std::vector<Observer*> observers;
    std::string lightsColor;
public:
    TrafficLights();
    void changeLight();
    std::string getCurrentLight();
    void subscribe(Observer *observer) override;
    void unsubscribe(Observer *observer) override;
    void notify() override;
};


#endif //OBSERVER_PROJECT_TRAFFICLIGHTS_H
