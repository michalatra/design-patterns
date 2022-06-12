//
// Created by XPS-15 on 17.05.2022.
//

#ifndef ABSTRACT_FACTORY_PROJECT_MANAGEPANELFACTORY_H
#define ABSTRACT_FACTORY_PROJECT_MANAGEPANELFACTORY_H


#include "Navbar.h"
#include "Sidebar.h"
#include "Menu.h"
#include "SearchBox.h"

class ManagePanelFactory {
public:
    virtual Navbar* createNavbar() = 0;
    virtual Sidebar* createSidebar() = 0;
    virtual Menu* createMenu() = 0;
    virtual SearchBox* createSearchBox() = 0;
};


#endif //ABSTRACT_FACTORY_PROJECT_MANAGEPANELFACTORY_H
