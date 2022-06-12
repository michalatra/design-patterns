//
// Created by michalatra on 08.06.22.
//

#include "User.h"
#include <iostream>

User::User(int id, const std::string &name, const std::string &surname, const std::string &email,
           const std::string &password) : id(id), name(name), surname(surname), email(email), password(password) {}

User::User(const std::string &name, const std::string &surname, const std::string &email, const std::string &password)
        : name(name), surname(surname), email(email), password(password) {}

User::User() {}

int User::getId() const {
    return id;
}

void User::setId(int id) {
    User::id = id;
}

const std::string &User::getName() const {
    return name;
}

void User::setName(const std::string &name) {
    User::name = name;
}

const std::string &User::getSurname() const {
    return surname;
}

void User::setSurname(const std::string &surname) {
    User::surname = surname;
}

const std::string &User::getEmail() const {
    return email;
}

void User::setEmail(const std::string &email) {
    User::email = email;
}

const std::string &User::getPassword() const {
    return password;
}

void User::setPassword(const std::string &password) {
    User::password = password;
}

void User::present() {
    std::cout<<"ID: "<<id<<"\n";
    std::cout<<"Name: "<<name<<"\n";
    std::cout<<"Surname: "<<surname<<"\n";
    std::cout<<"Email: "<<email<<"\n";
}
