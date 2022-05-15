//
// Created by XPS-15 on 10.05.2022.
//

#ifndef DECORATOR_PROJECT_CAMERA_H
#define DECORATOR_PROJECT_CAMERA_H


#include "ICamera.h"

class Camera: public ICamera {
public:
    Picture takePicture() override;
};


#endif //DECORATOR_PROJECT_CAMERA_H
