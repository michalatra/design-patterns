//
// Created by XPS-15 on 17.05.2022.
//

#ifndef ABSTRACT_FACTORY_PROJECT_CLIENTMENU_H
#define ABSTRACT_FACTORY_PROJECT_CLIENTMENU_H


#include "Menu.h"

class ClientMenu: public Menu {
public:
private:
    void renderMenu() override;

    void handleCommand(std::string command) override;
};


#endif //ABSTRACT_FACTORY_PROJECT_CLIENTMENU_H
