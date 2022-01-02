#ifndef FLYWITHWINGS_H
#define FLYWITHWINGS_H

#include "FlyBehavior.h"

class FlyWithWings : public FlyBehavior {
public:
    void Fly() override
    {
        std::cout << "I'm flying!!" << std::endl;
    }
};

#endif