//
// Created by XPS-15 on 17.05.2022.
//

#include <iostream>
#include "TextBox.h"

void TextBox::show() {
    std::cout<<"Showing TextBox: "<<content<<"\n";
}

TextBox::TextBox(const std::string &content) : content(content) {}
