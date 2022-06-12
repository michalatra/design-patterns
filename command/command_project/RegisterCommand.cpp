//
// Created by michalatra on 10.06.22.
//

#include "RegisterCommand.h"
#include <iostream>
#include "DbConnector.h"

void RegisterCommand::execute() {
    std::cout<<"Registering user ...\n";
    DbConnector::getInstance()->addRegistration(registration);
}

Registration *RegisterCommand::getRegistration() const {
    return registration;
}

void RegisterCommand::setRegistration(Registration *registration) {
    RegisterCommand::registration = registration;
}
