#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#include "Duck.h"
#include "NormalQuack.h"
#include "FlyWithWings.h"

class MallardDuck : public Duck {
public:
    MallardDuck() {
        quackBehavior = std::make_unique<NormalQuack>();
        flyBehavior = std::make_unique<FlyWithWings>();
    }

    void display() const override 
    {
        std::cout << "I'm a real Mallard duck." << std::endl;
    }
};

#endif