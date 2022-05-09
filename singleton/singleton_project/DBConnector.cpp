//
// Created by XPS-15 on 09.05.2022.
//

#include "DBConnector.h"

DBConnector* DBConnector::connector = nullptr;

DBConnector::DBConnector() {
    database = std::vector<User*>();
}

DBConnector* DBConnector::getInstance() {
    if (!connector)
        connector = new DBConnector();

    return connector;
}

User* DBConnector::getUser(std::string& username, std::string& password) {
    for (auto u: database) {
        if (u->getUsername() == username && u->getPassword() == password)
            return u;
    }

    return nullptr;
}

void DBConnector::saveUser(User* user) {
    database.push_back(user);
}
