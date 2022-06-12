//
// Created by XPS-15 on 17.05.2022.
//

#ifndef COMPOSITE_PROJECT_TEXTBOX_H
#define COMPOSITE_PROJECT_TEXTBOX_H


#include <string>
#include "Component.h"

class TextBox: public Component {
    std::string content;
public:
    TextBox(const std::string &content);

    void show() override;
};


#endif //COMPOSITE_PROJECT_TEXTBOX_H
