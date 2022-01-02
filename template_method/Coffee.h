#ifndef COFFEE_H
#define COFFEE_H

#include "CaffeineBeverage.h"

class Coffee: public CaffeineBeverage {
private:
    void Brew() {
        std::cout << "Dripping Coffee through filter" << std::endl;
    }

    void AddCondiments() {
        std::cout << "Adding Sugar and Milk" << std::endl;
    }
};

#endif