//
// Created by XPS-15 on 09.05.2022.
//

#ifndef SINGLETON_PROJECT_LOGINHANDLER_H
#define SINGLETON_PROJECT_LOGINHANDLER_H


#include "DBConnector.h"

class LoginHandler {
    DBConnector* connector;
public:
    LoginHandler();
    User* login();
};


#endif //SINGLETON_PROJECT_LOGINHANDLER_H
