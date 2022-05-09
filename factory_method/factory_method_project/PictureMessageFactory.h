//
// Created by micha on 09.05.2022.
//

#ifndef FACTORY_METHOD_PROJECT_PICTUREMESSAGEFACTORY_H
#define FACTORY_METHOD_PROJECT_PICTUREMESSAGEFACTORY_H


#include "MessageFactory.h"

class PictureMessageFactory : public MessageFactory {
public:
    Message *createMessage() override;

};


#endif //FACTORY_METHOD_PROJECT_PICTUREMESSAGEFACTORY_H
