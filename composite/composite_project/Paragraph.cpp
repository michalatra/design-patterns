//
// Created by XPS-15 on 17.05.2022.
//

#include <iostream>
#include "Paragraph.h"

void Paragraph::show() {
    std::cout<<"Showing paragraph: "<<content<<"\n";
}

Paragraph::Paragraph(const std::string &content) : content(content) {}
