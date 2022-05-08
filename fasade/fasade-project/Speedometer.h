//
// Created by micha on 06.05.2022.
//

#ifndef FASADE_PROJECT_SPEEDOMETER_H
#define FASADE_PROJECT_SPEEDOMETER_H


class Speedometer {
    int currentSpeed;
public:
    Speedometer();
    void increaseSpeed(int value);
    void decreaseSeed(int value);
    int getSpeed();
};


#endif //FASADE_PROJECT_SPEEDOMETER_H
