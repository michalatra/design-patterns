//
// Created by XPS-15 on 09.05.2022.
//

#include "User.h"

const std::string &User::getUsername() const {
    return username;
}

void User::setUsername(const std::string &username) {
    User::username = username;
}

const std::string &User::getPassword() const {
    return password;
}

void User::setPassword(const std::string &password) {
    User::password = password;
}

const std::string &User::getName() const {
    return name;
}

void User::setName(const std::string &name) {
    User::name = name;
}

User::User(const std::string &username, const std::string &password, const std::string &name) : username(username),
                                                                                                password(password),
                                                                                                name(name) {}

User::User() {}
