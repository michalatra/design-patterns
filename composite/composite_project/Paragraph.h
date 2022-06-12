//
// Created by XPS-15 on 17.05.2022.
//

#ifndef COMPOSITE_PROJECT_PARAGRAPH_H
#define COMPOSITE_PROJECT_PARAGRAPH_H


#include <string>
#include "Component.h"

class Paragraph: public Component {
    std::string content;

public:
    Paragraph(const std::string &content);
    void show() override;
};


#endif //COMPOSITE_PROJECT_PARAGRAPH_H
