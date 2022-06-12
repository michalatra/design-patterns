//
// Created by XPS-15 on 17.05.2022.
//

#include "SomeFancyAppWithUI.h"

void SomeFancyAppWithUI::generateUI(ManagePanelFactory *factory) {
    std::cout<<"Rendering UI\n";
    std::cout<<"-------------------------------\n";
    panelFactory = factory;
    navbar = panelFactory->createNavbar();
    sidebar = panelFactory->createSidebar();
    menu = panelFactory->createMenu();
    searchBox = panelFactory->createSearchBox();

    navbar->renderNavbar();
    sidebar->renderSidebar();
    menu->renderMenu();
    searchBox->renderSearchBox();

    std::cout<<"-------------------------------\n";
    std::cout<<"UI Rendered\n";
}
