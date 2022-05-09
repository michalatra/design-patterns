//
// Created by XPS-15 on 09.05.2022.
//

#ifndef SINGLETON_PROJECT_USER_H
#define SINGLETON_PROJECT_USER_H

#include <string>

class User {
    std::string username;
    std::string password;
    std::string name;
public:
    User();

    User(const std::string &username, const std::string &password, const std::string &name);

    const std::string &getUsername() const;

    void setUsername(const std::string &username);

    const std::string &getPassword() const;

    void setPassword(const std::string &password);

    const std::string &getName() const;

    void setName(const std::string &name);
};


#endif //SINGLETON_PROJECT_USER_H
