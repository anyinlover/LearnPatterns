#pragma once
#include "Duck.h"
#include "FlyNoWay.h"
#include "NormalQuack.h"

class ModelDuck : public Duck {
public:
  ModelDuck() {
    flyBehavior_ = FlyNoWay();
    quackBehavior_ = NormalQuack();
  }

  void display() const override;
};
