#ifndef FLYROCKETPOWERED_H
#define FLYROCKETPOWERED_H

#include <iostream>
#include "FlyBehavior.h"

class FlyRocketPowered : public FlyBehavior {
public:
    void Fly() override
    {
        std::cout << "I'm flying with a rocket." << std::endl;
    }
};

#endif
