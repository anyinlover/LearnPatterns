#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H
#include <iostream>
#include "Duck.h"

class MallardDuck : public Duck {
public:
    void Quack() override
    {
        std::cout << "Quack" << std::endl;
    }

    void Fly() override
    {
        std::cout << "I'm flying" << std::endl;
    }
};

#endif