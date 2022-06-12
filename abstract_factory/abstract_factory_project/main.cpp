#include <iostream>
#include "SomeFancyAppWithUI.h"
#include "AdministratorPanelFactory.h"
#include "ClientPanelFactory.h"

int main() {
    SomeFancyAppWithUI app = SomeFancyAppWithUI();
    ManagePanelFactory* factory;

    std::string input;
    std::cout<<"Type UI type to render (admin, client): ";
    std::cin>>input;

    if (input == "admin") factory = new AdministratorPanelFactory();
    else factory = new ClientPanelFactory();

    app.generateUI(factory);

    return 0;
}
