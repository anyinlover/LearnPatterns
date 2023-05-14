#pragma once
#include "Duck.h"
#include "FlyWithWings.h"
#include "NormalQuack.h"

class MallardDuck : public Duck {
public:
  MallardDuck() {
    quackBehavior_ = std::make_unique<NormalQuack>();
    flyBehavior_ = std::make_unique<FlyWithWings>();
  }

  void display() const override;
};
