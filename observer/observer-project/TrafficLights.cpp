//
// Created by XPS-15 on 09.05.2022.
//

#include <iostream>
#include "TrafficLights.h"

void TrafficLights::subscribe(Observer *observer) {
    observers.push_back(observer);
    std::cout<<"INFO: Observer subscribed\n";
}

void TrafficLights::unsubscribe(Observer *observer) {
    for (auto o = observers.begin(); o != observers.end(); o++) {
        if (*o == observer) {
            observers.erase(o);
            break;
        }
    }

    std::cout<<"INFO: Observer unsubscribed\n";
}

void TrafficLights::notify() {
    for (auto o: observers)
        o->update(this);
}

TrafficLights::TrafficLights() {
    lightsColor = "red";
    observers = std::vector<Observer*>();
}

void TrafficLights::changeLight() {
    std::cout<<"-----------Changing lights-------------\n";
    if (lightsColor == "red")
        lightsColor = "yellowRed";
    else if (lightsColor == "yellowRed")
        lightsColor = "green";
    else if (lightsColor == "green")
        lightsColor = "yellow";

    else if (lightsColor == "yellow")
        lightsColor = "red";
    std::cout<<"Color: "<<lightsColor<<"\n";
    std::cout<<"---------------------------------------\n";

    notify();
}

std::string TrafficLights::getCurrentLight() {
    return lightsColor;
}
