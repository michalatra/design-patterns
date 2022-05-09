//
// Created by micha on 09.05.2022.
//

#ifndef FACTORY_METHOD_PROJECT_FILEMESSAGE_H
#define FACTORY_METHOD_PROJECT_FILEMESSAGE_H


#include <string>
#include "Message.h"

class FileMessage : public Message {
    std::string fileContent;
public:
    FileMessage();

    void showContent() override;
};


#endif //FACTORY_METHOD_PROJECT_FILEMESSAGE_H
