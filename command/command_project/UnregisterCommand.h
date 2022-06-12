//
// Created by michalatra on 10.06.22.
//

#ifndef COMMAND_UNREGISTERCOMMAND_H
#define COMMAND_UNREGISTERCOMMAND_H

#include "Command.h"
#include "Registration.h"

class UnregisterCommand: public Command{
    Registration* registration;
public:
    void execute() override;

    Registration *getRegistration() const;

    void setRegistration(Registration *registration);
};


#endif //COMMAND_UNREGISTERCOMMAND_H
