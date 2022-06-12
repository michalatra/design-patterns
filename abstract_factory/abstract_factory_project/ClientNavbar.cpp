//
// Created by XPS-15 on 17.05.2022.
//

#include <iostream>
#include "ClientNavbar.h"

void ClientNavbar::renderNavbar() {
    std::cout<<"Rendering client navbar\n";
}

void ClientNavbar::handleLinkClick(std::string link) {
    std::cout<<"[CLIENT NAVBAR] Transferring to link: "<<link<<"...\n";
}
