#ifndef QUACK_H
#define QUACK_H

#include <iostream>
#include "QuackBehavior.h"

class NormalQuack : public QuackBehavior {
public:
    void Quack() override {
        std::cout << "Quack" << std::endl;
    }
};

#endif