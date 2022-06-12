//
// Created by XPS-15 on 17.05.2022.
//

#include <iostream>
#include "AdministratorNavbar.h"

void AdministratorNavbar::renderNavbar() {
    std::cout<<"Rendering admin navbar\n";
}

void AdministratorNavbar::handleLinkClick(std::string link) {
    std::cout<<"[ADMIN NAVBAR] Transferring to link: "<<link<<"...\n";
}
