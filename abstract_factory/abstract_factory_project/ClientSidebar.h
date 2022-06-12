//
// Created by XPS-15 on 17.05.2022.
//

#ifndef ABSTRACT_FACTORY_PROJECT_CLIENTSIDEBAR_H
#define ABSTRACT_FACTORY_PROJECT_CLIENTSIDEBAR_H


#include "Sidebar.h"

class ClientSidebar: public Sidebar {
public:
    void renderSidebar() override;

    void handleLinkClick(std::string link) override;
};


#endif //ABSTRACT_FACTORY_PROJECT_CLIENTSIDEBAR_H
