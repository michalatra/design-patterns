//
// Created by XPS-15 on 17.05.2022.
//

#include "AdministratorPanelFactory.h"
#include "AdministratorNavbar.h"
#include "AdministratorSidebar.h"
#include "AdministratorMenu.h"
#include "AdministratorSearchBox.h"

Navbar* AdministratorPanelFactory::createNavbar() {
    return new AdministratorNavbar();
}

Sidebar* AdministratorPanelFactory::createSidebar() {
    return new AdministratorSidebar();
}

Menu* AdministratorPanelFactory::createMenu() {
    return new AdministratorMenu();
}

SearchBox* AdministratorPanelFactory::createSearchBox() {
    return new AdministratorSearchBox();
}
