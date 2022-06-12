//
// Created by XPS-15 on 17.05.2022.
//

#ifndef ABSTRACT_FACTORY_PROJECT_SIDEBAR_H
#define ABSTRACT_FACTORY_PROJECT_SIDEBAR_H

#include <string>

class Sidebar {
public:
    virtual void renderSidebar() = 0;
    virtual void handleLinkClick(std::string link) = 0;
};


#endif //ABSTRACT_FACTORY_PROJECT_SIDEBAR_H
