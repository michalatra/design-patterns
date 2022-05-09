//
// Created by XPS-15 on 09.05.2022.
//

#ifndef SINGLETON_PROJECT_REGISTERHANDLER_H
#define SINGLETON_PROJECT_REGISTERHANDLER_H


#include "DBConnector.h"

class RegisterHandler {
    DBConnector* connector;
public:
    RegisterHandler();
    User* registerUser();
};


#endif //SINGLETON_PROJECT_REGISTERHANDLER_H
