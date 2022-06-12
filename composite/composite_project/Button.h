//
// Created by XPS-15 on 17.05.2022.
//

#ifndef COMPOSITE_PROJECT_BUTTON_H
#define COMPOSITE_PROJECT_BUTTON_H


#include <string>
#include "Component.h"

class Button: public Component {
    std::string content;
public:
    Button(const std::string &content);

    void show() override;
};


#endif //COMPOSITE_PROJECT_BUTTON_H
