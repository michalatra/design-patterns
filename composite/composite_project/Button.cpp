//
// Created by XPS-15 on 17.05.2022.
//

#include <iostream>
#include "Button.h"

void Button::show() {
    std::cout<<"Showing button: "<<content<<"\n";
}

Button::Button(const std::string &content) : content(content) {}
