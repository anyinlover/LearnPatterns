#ifndef FLYNOWAY_H
#define FLYNOWAY_H

#include "FlyBehavior.h"

class FlyNoWay : public FlyBehavior {
public:
    void Fly() override {
        std::cout << "I can't fly" << std::endl;
    }
};

#endif