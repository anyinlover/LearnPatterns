#ifndef COFFEE_H
#define COFFEE_H

#include <string>
#include "CaffeineBeverageWithHook.h"

class CoffeeWithHook: public CaffeineBeverageWithHook {
private:
    void Brew() {
        std::cout << "Dripping Coffee through filter" << std::endl;
    }

    void AddCondiments() {
        std::cout << "Adding Sugar and Milk" << std::endl;
    }

    bool CustomerWantsCondiments() {
        std::string answer = GetUserInput();
        return std::tolower(answer.front()) == 'y' ? true : false;
    }

    std::string GetUserInput()
    {
        std::string answer = "no";
        std::cout << "Would you like milk and sugar with your coffee (y/n)? " << std::endl;
        if (!std::getline(std::cin, answer)) {
            std::cerr << "IO error trying to read your answer." << std::endl;
        }
        return answer;
    }
};

#endif