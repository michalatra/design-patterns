//
// Created by XPS-15 on 17.05.2022.
//

#ifndef ABSTRACT_FACTORY_PROJECT_ADMINISTRATORNAVBAR_H
#define ABSTRACT_FACTORY_PROJECT_ADMINISTRATORNAVBAR_H


#include "Navbar.h"

class AdministratorNavbar: public Navbar {
public:
    void renderNavbar() override;

    void handleLinkClick(std::string link) override;

};


#endif //ABSTRACT_FACTORY_PROJECT_ADMINISTRATORNAVBAR_H
