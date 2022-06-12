//
// Created by michalatra on 08.06.22.
//

#ifndef ADAPTER_DBADAPTER_H
#define ADAPTER_DBADAPTER_H

#include "User.h"
#include <string>

class DbAdapter {
public:
    virtual User* addUser(User* user) = 0;
    virtual User* removeUserById(int userId) = 0;
    virtual User* getUserByEmail(std::string email, std::string password) = 0;
    virtual void modifyUser(int userId, User* user) = 0;
};


#endif //ADAPTER_DBADAPTER_H
