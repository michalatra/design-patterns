//
// Created by micha on 09.05.2022.
//

#include "PictureMessageFactory.h"
#include "PictureMessage.h"

Message *PictureMessageFactory::createMessage() {
    return new PictureMessage();
}
