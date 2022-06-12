#include <iostream>
#include "PostgresAdapter.h"
#include "SystemRejestracji.h"

#include <iostream>
#include <string>

int main() {
    PostgresAdapter* adapter = new PostgresAdapter();

    SystemRejestracji system = SystemRejestracji(adapter);

    std::string input = "";

    std::cout<<"Podaj komende: ";
    std::cin>>input;

    while (input != "stop") {
        if (input == "zarejestruj")
            system.zarejestruj();
        else if (input == "zaloguj")
            system.zaloguj();

        std::cout<<"Podaj komende: ";
        std::cin>>input;
    }

    return 0;
}
