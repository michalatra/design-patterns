//
// Created by XPS-15 on 09.05.2022.
//

#ifndef SINGLETON_PROJECT_SOMEFANCYAPP_H
#define SINGLETON_PROJECT_SOMEFANCYAPP_H


#include "RegisterHandler.h"
#include "LoginHandler.h"

class SomeFancyApp {
    RegisterHandler registerHandler;
    LoginHandler loginHandler;

public:
    SomeFancyApp();
    void run();
};


#endif //SINGLETON_PROJECT_SOMEFANCYAPP_H
