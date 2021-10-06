#ifndef MODELDUCK_H
#define MODELDUCK_H

#include <iostream>
#include "Duck.h"
#include "NormalQuack.h"
#include "FlyNoWay.h"

class ModelDuck : public Duck {
public:
    ModelDuck() {
        flyBehavior = std::make_unique<FlyNoWay>();
        quackBehavior = std::make_unique<NormalQuack>();
    }

    void display() const override
    {
        std::cout << "I'm a model duck" << std::endl;
    }
};

#endif