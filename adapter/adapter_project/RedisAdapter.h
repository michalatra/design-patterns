//
// Created by michalatra on 08.06.22.
//

#ifndef ADAPTER_REDISADAPTER_H
#define ADAPTER_REDISADAPTER_H

#include "DbAdapter.h"
#include "RedisORM.h"
#include <vector>

class RedisAdapter: public DbAdapter {
    RedisORM orm;
    std::vector<User*>* users;
    int topIdx;

public:
    RedisAdapter();

    User *addUser(User *user) override;

    User *removeUserById(int userId) override;

    User *getUserByEmail(std::string email, std::string password) override;

    void modifyUser(int userId, User *user) override;
};


#endif //ADAPTER_REDISADAPTER_H
