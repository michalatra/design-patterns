//
// Created by michalatra on 10.06.22.
//

#ifndef COMMAND_REGISTERCOMMAND_H
#define COMMAND_REGISTERCOMMAND_H

#include "Command.h"
#include "Registration.h"

class RegisterCommand: public Command {
    Registration* registration;
public:
    void execute() override;

    Registration *getRegistration() const;

    void setRegistration(Registration *registration);
};


#endif //COMMAND_REGISTERCOMMAND_H
