//
// Created by XPS-15 on 17.05.2022.
//

#include <iostream>
#include "AdministratorSidebar.h"

void AdministratorSidebar::renderSidebar() {
    std::cout<<"Rendering admin sidebar\n";

}

void AdministratorSidebar::handleLinkClick(std::string link) {
    std::cout<<"[ADMIN SIDEBAR] Transferring to link: "<<link<<"...\n";
}
