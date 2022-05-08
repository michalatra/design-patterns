#include <iostream>
#include "VCU.h"
#include <string>
int main() {
    VCU vcu = VCU();

    std::string input;
    std::cout<<"----------Instructions-----------\n";
    std::cout<<"stats <- showing VCU stats\n";
    std::cout<<"increase <- increasing speed\n";
    std::cout<<"decrease <- decreasing speed\n";
    std::cout<<"break <- finishing work\n";
    std::cout<<"---------------------------------\n";

    while (true) {
        std::cout<<"Type command: ";
        std::cin>>input;
        if (input == "break") break;
        else if (input == "stats") vcu.showStats();
        else if (input == "increase") vcu.speedUp(5);
        else if (input == "decrease") vcu.slowDown(5);
    }

    return 0;
}
