//
// Created by michalatra on 10.06.22.
//

#include "SystemRejestracji.h"
#include "RegisterCommand.h"
#include "UnregisterCommand.h"
#include "Registration.h"

void SystemRejestracji::startRegistration() {

    Registration* registration = new Registration("Sub1", "Gr0");

    RegisterCommand* regCmd = new RegisterCommand();
    regCmd->setRegistration(registration);

    UnregisterCommand* unregCmd = new UnregisterCommand();
    unregCmd->setRegistration(registration);

    processor.addCommand(regCmd);
    processor.addCommand(unregCmd);

    processor.runNextCommand();
    processor.runNextCommand();
}
