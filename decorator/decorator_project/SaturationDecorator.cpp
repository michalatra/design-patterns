//
// Created by XPS-15 on 10.05.2022.
//

#include "SaturationDecorator.h"

Picture SaturationDecorator::takePicture() {
    Picture picture = wrappee->takePicture();
    picture.setPictureData(picture.getPictureData() + "Saturation filter applied\n");
    return picture;
}
