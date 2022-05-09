//
// Created by micha on 09.05.2022.
//

#include "TextMessage.h"
#include <iostream>

void TextMessage::showContent() {
    std::cout<<textContent<<"\n";
}

TextMessage::TextMessage() {
    textContent = "This is text message content";
}
