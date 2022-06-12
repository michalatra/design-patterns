//
// Created by michalatra on 08.06.22.
//

#include "SystemRejestracji.h"
#include <string>
#include <iostream>

SystemRejestracji::SystemRejestracji(DbAdapter *dbAdapter) : dbAdapter(dbAdapter) {}

void SystemRejestracji::zarejestruj() {
    std::string name;
    std::string surname;
    std::string email;
    std::string password;

    std::cout<<"Podaj imie: ";
    std::cin>>name;
    std::cout<<"Podaj nazwisko: ";
    std::cin>>surname;
    std::cout<<"Podaj email: ";
    std::cin>>email;
    std::cout<<"Podaj haslo: ";
    std::cin>>password;

    User* user = new User(name, surname, email, password);
    User* dbUser = dbAdapter->addUser(user);
    dbUser->present();
}

void SystemRejestracji::zaloguj() {
    std::string email;
    std::string password;

    std::cout<<"Podaj email: ";
    std::cin>>email;
    std::cout<<"Podaj haslo: ";
    std::cin>>password;


    User* dbUser = dbAdapter->getUserByEmail(email, password);

    if (dbUser)
        dbUser->present();
    else
        std::cout<<"Bledne dane\n";
}
