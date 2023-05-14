#ifndef MODELDUCK_H
#define MODELDUCK_H

#include "Duck.h"
#include "FlyNoWay.h"
#include "NormalQuack.h"
#include <iostream>

class ModelDuck : public Duck {
public:
  ModelDuck() {
    flyBehavior_ = std::make_unique<FlyNoWay>();
    quackBehavior = std::make_unique<NormalQuack>();
  }

  void display() const override {
    std::cout << "I'm a model duck" << std::endl;
  }
};

#endif