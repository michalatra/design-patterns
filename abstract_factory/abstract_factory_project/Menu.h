//
// Created by XPS-15 on 17.05.2022.
//

#ifndef ABSTRACT_FACTORY_PROJECT_MENU_H
#define ABSTRACT_FACTORY_PROJECT_MENU_H


#include <string>

class Menu {
public:
    virtual void renderMenu() = 0;
    virtual void handleCommand(std::string command) = 0;
};


#endif //ABSTRACT_FACTORY_PROJECT_MENU_H
