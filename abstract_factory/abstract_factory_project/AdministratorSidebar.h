//
// Created by XPS-15 on 17.05.2022.
//

#ifndef ABSTRACT_FACTORY_PROJECT_ADMINISTRATORSIDEBAR_H
#define ABSTRACT_FACTORY_PROJECT_ADMINISTRATORSIDEBAR_H


#include "Sidebar.h"

class AdministratorSidebar: public Sidebar {
public:
private:
    void renderSidebar() override;

    void handleLinkClick(std::string link) override;
};


#endif //ABSTRACT_FACTORY_PROJECT_ADMINISTRATORSIDEBAR_H
