#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#include "Duck.h"
#include "FlyWithWings.h"
#include "NormalQuack.h"

class MallardDuck : public Duck {
public:
  MallardDuck() {
    quackBehavior = std::make_unique<NormalQuack>();
    flyBehavior_ = std::make_unique<FlyWithWings>();
  }

  void display() const override {
    std::cout << "I'm a real Mallard duck." << std::endl;
  }
};

#endif