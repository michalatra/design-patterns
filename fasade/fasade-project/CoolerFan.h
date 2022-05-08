//
// Created by micha on 06.05.2022.
//

#ifndef FASADE_PROJECT_COOLERFAN_H
#define FASADE_PROJECT_COOLERFAN_H


class CoolerFan {
    int currentRPM;
public:
    CoolerFan();
    void increaseRPM(int value);
    void decreaseRPM(int value);
    int getCurrentRPM();
};


#endif //FASADE_PROJECT_COOLERFAN_H
