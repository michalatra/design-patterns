#ifndef COMMAND_DBCONNECTOR_H
#define COMMAND_DBCONNECTOR_H

#include "Registration.h"
#include <vector>

class DbConnector {
    static DbConnector* instance;
    DbConnector();
    std::vector<Registration*>* registrations;
    int topIdx;
public:
    static DbConnector* getInstance();
    Registration* addRegistration(Registration* r);
    Registration* deleteRegistration(int regId);
    Registration* getRegistrationById(int regId);
};




#endif //COMMAND_DBCONNECTOR_H
