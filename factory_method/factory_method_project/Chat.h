//
// Created by micha on 09.05.2022.
//

#ifndef FACTORY_METHOD_PROJECT_CHAT_H
#define FACTORY_METHOD_PROJECT_CHAT_H

#include <vector>
#include "Message.h"
#include "MessageFactory.h"

class Chat {
    std::vector<Message*> messages;

public:
    std::vector<Message*> &getMessages();
    void addMessage(Message* message);
    Message* createMessage(MessageFactory* factory);

};


#endif //FACTORY_METHOD_PROJECT_CHAT_H
