//
// Created by XPS-15 on 17.05.2022.
//

#include <iostream>
#include "ClientSidebar.h"

void ClientSidebar::renderSidebar() {
    std::cout<<"Rendering client sidebar\n";

}

void ClientSidebar::handleLinkClick(std::string link) {
    std::cout<<"[CLIENT SIDEBAR] Transferring to link: "<<link<<"...\n";
}
