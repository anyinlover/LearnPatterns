#pragma once
#include "QuackBehavior.h"

class NormalQuack : public QuackBehavior {
public:
  void quack() const override;
};
