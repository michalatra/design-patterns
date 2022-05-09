//
// Created by micha on 09.05.2022.
//

#ifndef FACTORY_METHOD_PROJECT_MESSAGEFACTORY_H
#define FACTORY_METHOD_PROJECT_MESSAGEFACTORY_H


#include "Message.h"

class MessageFactory {
public:
    virtual Message* createMessage() = 0;
};


#endif //FACTORY_METHOD_PROJECT_MESSAGEFACTORY_H
