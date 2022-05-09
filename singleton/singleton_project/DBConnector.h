//
// Created by XPS-15 on 09.05.2022.
//

#ifndef SINGLETON_PROJECT_DBCONNECTOR_H
#define SINGLETON_PROJECT_DBCONNECTOR_H

#include <vector>
#include "User.h"

class DBConnector {
    static DBConnector* connector;
    std::vector<User*> database;

    DBConnector();
public:
    static DBConnector* getInstance();
    User* getUser(std::string& username, std::string& password);
    void saveUser(User* user);
};


#endif //SINGLETON_PROJECT_DBCONNECTOR_H
