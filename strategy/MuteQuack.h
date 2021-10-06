#ifndef MUTEQUACK_H
#define MUTEQUACK_H

#include <iostream>
#include "QuackBehavior.h"

class MuteQuack : public QuackBehavior {
public:
    void Quack() override
    {
       std::cout << "<< Silence >>" << std::endl; 
    }
};

#endif