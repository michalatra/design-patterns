//
// Created by micha on 09.05.2022.
//

#include "FileMessageFactory.h"
#include "FileMessage.h"

Message *FileMessageFactory::createMessage() {
    return new FileMessage();
}
