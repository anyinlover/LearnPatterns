#ifndef SQUEAK_H
#define SQUEAK_H

#include <iostream>
#include <QuackBehavior.h>

class Squeak : public QuackBehavior {
public:
    void Quack() override
    {
        std::cout << "Squeak" << std::endl;
    }
};

#endif