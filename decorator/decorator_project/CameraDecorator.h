//
// Created by XPS-15 on 10.05.2022.
//

#ifndef DECORATOR_PROJECT_CAMERADECORATOR_H
#define DECORATOR_PROJECT_CAMERADECORATOR_H


#include "ICamera.h"

class CameraDecorator : public ICamera {
protected:
    ICamera* wrappee;
public:
    CameraDecorator(ICamera *wrappee);

    virtual Picture takePicture() override = 0;
};


#endif //DECORATOR_PROJECT_CAMERADECORATOR_H
