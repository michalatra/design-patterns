//
// Created by michalatra on 08.06.22.
//

#ifndef ADAPTER_ORACLEADAPTER_H
#define ADAPTER_ORACLEADAPTER_H

#include "DbAdapter.h"
#include "OracleORM.h"
#include <vector>
#include "User.h"

class OracleAdapter: public DbAdapter {
    OracleORM orm;
    std::vector<User*>* users;
    int topIdx;

public:
    OracleAdapter();

    User *addUser(User *user) override;

    User *removeUserById(int userId) override;

    User *getUserByEmail(std::string email, std::string password) override;

    void modifyUser(int userId, User *user) override;
};


#endif //ADAPTER_ORACLEADAPTER_H
