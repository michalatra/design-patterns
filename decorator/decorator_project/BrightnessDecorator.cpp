//
// Created by XPS-15 on 10.05.2022.
//

#include "BrightnessDecorator.h"

Picture BrightnessDecorator::takePicture() {
    Picture picture = wrappee->takePicture();
    picture.setPictureData(picture.getPictureData() + "Brightness filter applied\n");
    return picture;
}
