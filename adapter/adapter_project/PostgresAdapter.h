//
// Created by michalatra on 08.06.22.
//

#ifndef ADAPTER_POSTGRESADAPTER_H
#define ADAPTER_POSTGRESADAPTER_H

#include "DbAdapter.h"
#include "PostgresORM.h"
#include <vector>


class PostgresAdapter: public DbAdapter {
    PostgresORM orm;
    std::vector<User*>* users;
    int topIdx;

public:
    PostgresAdapter();

    User *addUser(User *user) override;

    User *removeUserById(int userId) override;

    User *getUserByEmail(std::string email, std::string password) override;

    void modifyUser(int userId, User *user) override;
};


#endif //ADAPTER_POSTGRESADAPTER_H
