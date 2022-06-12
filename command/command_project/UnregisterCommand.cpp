//
// Created by michalatra on 10.06.22.
//

#include "UnregisterCommand.h"
#include <iostream>
#include "DbConnector.h"

void UnregisterCommand::execute() {
    std::cout<<"Unregistering user...\n";
    DbConnector::getInstance()->deleteRegistration(registration->getId());
}

Registration *UnregisterCommand::getRegistration() const {
    return registration;
}

void UnregisterCommand::setRegistration(Registration *registration) {
    UnregisterCommand::registration = registration;
}
