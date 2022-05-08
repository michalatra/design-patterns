//
// Created by micha on 06.05.2022.
//

#ifndef FASADE_PROJECT_COOLERPUMP_H
#define FASADE_PROJECT_COOLERPUMP_H


class CoolerPump {
    int currentFlow;
public:
    CoolerPump();
    void increaseCurrentFlow(int value);
    void decreaseCurrentFlow(int value);
    int getCurrentFlow();
};


#endif //FASADE_PROJECT_COOLERPUMP_H
