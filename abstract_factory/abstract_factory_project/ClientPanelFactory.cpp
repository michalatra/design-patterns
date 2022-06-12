//
// Created by XPS-15 on 17.05.2022.
//

#include "ClientPanelFactory.h"
#include "ClientNavbar.h"
#include "ClientSidebar.h"
#include "ClientMenu.h"
#include "ClientSearchBox.h"

Navbar *ClientPanelFactory::createNavbar() {
    return new ClientNavbar();
}

Sidebar *ClientPanelFactory::createSidebar() {
    return new ClientSidebar();
}

Menu *ClientPanelFactory::createMenu() {
    return new ClientMenu();
}

SearchBox *ClientPanelFactory::createSearchBox() {
    return new ClientSearchBox();
}
