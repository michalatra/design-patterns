//
// Created by michalatra on 08.06.22.
//

#ifndef ADAPTER_USER_H
#define ADAPTER_USER_H

#include <string>

class User {
    int id;
    std::string name;
    std::string surname;
    std::string email;
    std::string password;

public:
    User(int id, const std::string &name, const std::string &surname, const std::string &email,
         const std::string &password);

    User(const std::string &name, const std::string &surname, const std::string &email, const std::string &password);

    User();

    int getId() const;

    void setId(int id);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getSurname() const;

    void setSurname(const std::string &surname);

    const std::string &getEmail() const;

    void setEmail(const std::string &email);

    const std::string &getPassword() const;

    void setPassword(const std::string &password);

    void present();
};


#endif //ADAPTER_USER_H
