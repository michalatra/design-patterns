//
// Created by micha on 09.05.2022.
//

#ifndef FACTORY_METHOD_PROJECT_PICTUREMESSAGE_H
#define FACTORY_METHOD_PROJECT_PICTUREMESSAGE_H


#include <string>
#include "Message.h"

class PictureMessage : public Message {
    std::string pictureContent;
public:
    PictureMessage();

private:
    void showContent() override;
};


#endif //FACTORY_METHOD_PROJECT_PICTUREMESSAGE_H
