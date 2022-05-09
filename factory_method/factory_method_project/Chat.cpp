//
// Created by micha on 09.05.2022.
//

#include "Chat.h"

std::vector<Message*> &Chat::getMessages() {
    return messages;
}

void Chat::addMessage(Message *message) {
    messages.push_back(message);
}

Message *Chat::createMessage(MessageFactory* factory) {
    factory->createMessage();
}
