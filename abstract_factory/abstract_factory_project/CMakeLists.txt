cmake_minimum_required(VERSION 3.22)
project(abstract_factory_project)

set(CMAKE_CXX_STANDARD 14)

add_executable(abstract_factory_project main.cpp SearchBox.cpp SearchBox.h Menu.cpp Menu.h Sidebar.cpp Sidebar.h Navbar.cpp Navbar.h AdministratorNavbar.cpp AdministratorNavbar.h ClientNavbar.cpp ClientNavbar.h AdministratorSidebar.cpp AdministratorSidebar.h ClientSidebar.cpp ClientSidebar.h AdministratorMenu.cpp AdministratorMenu.h ClientMenu.cpp ClientMenu.h AdministratorSearchBox.cpp AdministratorSearchBox.h ClientSearchBox.cpp ClientSearchBox.h ManagePanelFactory.cpp ManagePanelFactory.h AdministratorPanelFactory.cpp AdministratorPanelFactory.h ClientPanelFactory.cpp ClientPanelFactory.h SomeFancyAppWithUI.cpp SomeFancyAppWithUI.h)
