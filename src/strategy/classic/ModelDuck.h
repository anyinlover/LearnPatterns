#pragma once
#include "Duck.h"
#include "FlyNoWay.h"
#include "NormalQuack.h"

class ModelDuck : public Duck {
public:
  ModelDuck() {
    flyBehavior_ = std::make_unique<FlyNoWay>();
    quackBehavior_ = std::make_unique<NormalQuack>();
  }

  void display() const override;
};
