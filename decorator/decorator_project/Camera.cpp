//
// Created by XPS-15 on 10.05.2022.
//

#include "Camera.h"
#include "time.h"

Picture Camera::takePicture() {
    return Picture(300, 400, "picture", "Picture created by camera\n");
}
