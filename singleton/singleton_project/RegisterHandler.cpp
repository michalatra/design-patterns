//
// Created by XPS-15 on 09.05.2022.
//

#include <iostream>
#include "RegisterHandler.h"

RegisterHandler::RegisterHandler() {
    connector = DBConnector::getInstance();
}

User* RegisterHandler::registerUser() {
    std::cout<<"-----------Registering user-------------\n";
    User* user = new User();
    std::string input;
    std::cout<<"Set username: ";
    std::cin>>input;
    user->setUsername(input);
    std::cout<<"Set name: ";
    std::cin>>input;
    user->setName(input);
    std::cout<<"Set password: ";
    std::cin>>input;
    user->setPassword(input);

    connector->saveUser(user);
    std::cout<<"INFO: User registered\n";
    std::cout<<"--------------------------------------\n";
    return user;
}
