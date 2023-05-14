#pragma once
#include "Duck.h"
#include "FlyWithWings.h"
#include "NormalQuack.h"

class MallardDuck : public Duck {
public:
  MallardDuck() {
    quackBehavior_ = NormalQuack();
    flyBehavior_ = FlyWithWings();
  }

  void display() const override;
};
