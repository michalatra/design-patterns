//
// Created by micha on 06.05.2022.
//

#ifndef FASADE_PROJECT_ENGINETHERMOMETER_H
#define FASADE_PROJECT_ENGINETHERMOMETER_H


class EngineThermometer {
    int engineTemperature;
    int getUpdatedTemperature();
public:
    EngineThermometer();
    int getTemperature();
};


#endif //FASADE_PROJECT_ENGINETHERMOMETER_H
