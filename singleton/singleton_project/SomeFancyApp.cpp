//
// Created by XPS-15 on 09.05.2022.
//

#include <iostream>
#include "SomeFancyApp.h"

SomeFancyApp::SomeFancyApp() {
    registerHandler = RegisterHandler();
    loginHandler = LoginHandler();
}

void SomeFancyApp::run() {
    std::cout<<"-----------Instructions-----------\n";
    std::cout<<"finish -> end work\n";
    std::cout<<"login -> logging user in\n";
    std::cout<<"register -> registering user\n";
    std::string command;
    std::cout<<"Type command: ";
    std::cin>>command;

    while (true) {
        if (command == "finish") break;
        else if (command == "login") loginHandler.login();
        else if (command == "register") registerHandler.registerUser();

        std::cout<<"Type command: ";
        std::cin>>command;
    }

}
