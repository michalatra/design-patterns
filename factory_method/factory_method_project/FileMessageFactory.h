//
// Created by micha on 09.05.2022.
//

#ifndef FACTORY_METHOD_PROJECT_FILEMESSAGEFACTORY_H
#define FACTORY_METHOD_PROJECT_FILEMESSAGEFACTORY_H


#include "MessageFactory.h"

class FileMessageFactory : public MessageFactory {
    Message *createMessage() override;
};


#endif //FACTORY_METHOD_PROJECT_FILEMESSAGEFACTORY_H
