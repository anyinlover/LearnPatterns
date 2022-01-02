#ifndef WILDTURKEY_H
#define WILDTURKEY_H
#include <iostream>
#include "Turkey.h"

class WildTurkey : public Turkey {
public:
    void Gobble() override
    {
        std::cout << "Gobble gobble" << std::endl;
    }

    void Fly() override
    {
        std::cout << "I'm flying a short distance" << std::endl;
    }
};

#endif