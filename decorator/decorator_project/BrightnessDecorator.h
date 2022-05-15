//
// Created by XPS-15 on 10.05.2022.
//

#ifndef DECORATOR_PROJECT_BRIGHTNESSDECORATOR_H
#define DECORATOR_PROJECT_BRIGHTNESSDECORATOR_H


#include "CameraDecorator.h"

class BrightnessDecorator : public CameraDecorator {
public:
    using CameraDecorator::CameraDecorator;
    Picture takePicture() override;
};


#endif //DECORATOR_PROJECT_BRIGHTNESSDECORATOR_H
