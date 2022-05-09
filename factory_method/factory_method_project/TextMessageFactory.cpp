//
// Created by micha on 09.05.2022.
//

#include "TextMessageFactory.h"
#include "TextMessage.h"

Message *TextMessageFactory::createMessage() {
    return new TextMessage();
}
