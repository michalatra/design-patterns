//
// Created by micha on 09.05.2022.
//

#include <iostream>
#include "PictureMessage.h"

void PictureMessage::showContent() {
    std::cout<<pictureContent<<"\n";
}

PictureMessage::PictureMessage() {
    pictureContent = "This is picture message content";
}