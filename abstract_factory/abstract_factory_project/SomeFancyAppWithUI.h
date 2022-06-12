//
// Created by XPS-15 on 17.05.2022.
//

#ifndef ABSTRACT_FACTORY_PROJECT_SOMEFANCYAPPWITHUI_H
#define ABSTRACT_FACTORY_PROJECT_SOMEFANCYAPPWITHUI_H


#include <iostream>
#include "ManagePanelFactory.h"

class SomeFancyAppWithUI {
    ManagePanelFactory* panelFactory = nullptr;
    Navbar* navbar = nullptr;
    Sidebar* sidebar = nullptr;
    Menu* menu = nullptr;
    SearchBox* searchBox = nullptr;

public:
    void generateUI(ManagePanelFactory* factory);
};


#endif //ABSTRACT_FACTORY_PROJECT_SOMEFANCYAPPWITHUI_H
