//
// Created by XPS-15 on 10.05.2022.
//

#ifndef DECORATOR_PROJECT_ICAMERA_H
#define DECORATOR_PROJECT_ICAMERA_H


#include "Picture.h"

class ICamera {
public:
    virtual Picture takePicture() = 0;
};


#endif //DECORATOR_PROJECT_ICAMERA_H
