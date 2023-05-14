#pragma once
#include "FlyBehavior.h"
#include "QuackBehavior.h"
#include <iostream>
#include <memory>

class Duck {
public:
  virtual ~Duck() = default;
  virtual void display() const = 0;
  void performFly() { flyBehavior_->fly(); }

  void performQuack() { quackBehavior_->quack(); }

  void setFlyBehavior(std::unique_ptr<FlyBehavior> fb) {
    flyBehavior_ = std::move(fb);
  }

  void setQuackBehavior(std::unique_ptr<QuackBehavior> qb) {
    quackBehavior_ = std::move(qb);
  }

  void swim() { std::cout << "All ducks float, even decoys!\n"; }

protected:
  std::unique_ptr<FlyBehavior> flyBehavior_;
  std::unique_ptr<QuackBehavior> quackBehavior_;
};
