//
// Created by XPS-15 on 09.05.2022.
//

#include <iostream>
#include "LoginHandler.h"

LoginHandler::LoginHandler() {
    connector = DBConnector::getInstance();
}

User *LoginHandler::login() {
    std::cout<<"-----------Logging user-------------\n";
    std::string username;
    std::string password;
    std::cout<<"Type username: ";
    std::cin>>username;
    std::cout<<"Type password: ";
    std::cin>>password;

    User* user = connector->getUser(username, password);

    if (user)
        std::cout<<"INFO: User logged in\n";
    else
        std::cout<<"INFO: User not found\n";

    std::cout<<"------------------------------------\n";
    return user;
}


