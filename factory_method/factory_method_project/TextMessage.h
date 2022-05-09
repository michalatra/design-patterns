//
// Created by micha on 09.05.2022.
//

#ifndef FACTORY_METHOD_PROJECT_TEXTMESSAGE_H
#define FACTORY_METHOD_PROJECT_TEXTMESSAGE_H


#include <string>
#include "Message.h"

class TextMessage : public Message {
    std::string textContent;
public:
    TextMessage();

    void showContent() override;
};


#endif //FACTORY_METHOD_PROJECT_TEXTMESSAGE_H
