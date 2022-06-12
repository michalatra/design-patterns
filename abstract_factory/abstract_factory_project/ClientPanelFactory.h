//
// Created by XPS-15 on 17.05.2022.
//

#ifndef ABSTRACT_FACTORY_PROJECT_CLIENTPANELFACTORY_H
#define ABSTRACT_FACTORY_PROJECT_CLIENTPANELFACTORY_H


#include "ManagePanelFactory.h"

class ClientPanelFactory: public ManagePanelFactory {
    ManagePanelFactory* instance = nullptr;
public:
    Navbar *createNavbar() override;

    Sidebar *createSidebar() override;

    Menu *createMenu() override;

    SearchBox *createSearchBox() override;
};


#endif //ABSTRACT_FACTORY_PROJECT_CLIENTPANELFACTORY_H
