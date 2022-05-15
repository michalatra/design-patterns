//
// Created by XPS-15 on 10.05.2022.
//

#include "ContrastDecorator.h"

Picture ContrastDecorator::takePicture() {
    Picture picture = wrappee->takePicture();
    picture.setPictureData(picture.getPictureData() + "Contrast filter applied\n");
    return picture;
}