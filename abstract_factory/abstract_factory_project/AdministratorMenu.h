//
// Created by XPS-15 on 17.05.2022.
//

#ifndef ABSTRACT_FACTORY_PROJECT_ADMINISTRATORMENU_H
#define ABSTRACT_FACTORY_PROJECT_ADMINISTRATORMENU_H


#include "Menu.h"

class AdministratorMenu: public Menu {
public:
private:
    void renderMenu() override;

    void handleCommand(std::string command) override;
};


#endif //ABSTRACT_FACTORY_PROJECT_ADMINISTRATORMENU_H
