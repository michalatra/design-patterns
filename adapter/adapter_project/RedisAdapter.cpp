//
// Created by michalatra on 08.06.22.
//

#include "RedisAdapter.h"

User *RedisAdapter::addUser(User *user) {
    user->setId(topIdx++);
    users->push_back(user);
    return user;
}

User *RedisAdapter::removeUserById(int userId) {
    User* user = nullptr;
    for (auto u=users->begin(); u != users->end(); u++) {
        if ((*u)->getId() == userId) {
            user = *u;
            users->erase(u);
            return user;
        }
    }

    return user;
}

User *RedisAdapter::getUserByEmail(std::string email, std::string password) {
    for (auto u=users->begin(); u != users->end(); u++) {
        if ((*u)->getEmail() == email) {
            if ((*u)->getPassword() == password)
                return *u;
            else
                return nullptr;
        }
    }

    return nullptr;
}

void RedisAdapter::modifyUser(int userId, User *user) {
    for (auto u=users->begin(); u != users->end(); u++) {
        if ((*u)->getId() == userId) {
            (*u)->setName(user->getName());
            (*u)->setSurname(user->getSurname());
            (*u)->setEmail(user->getEmail());

            return;
        }
    }
}

RedisAdapter::RedisAdapter() {
    orm = RedisORM();
    users = new std::vector<User*>();
    topIdx = 0;
}