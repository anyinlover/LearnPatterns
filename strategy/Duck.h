#ifndef DUCK_H
#define DUCK_H

#include "FlyBehavior.h"
#include "QuackBehavior.h"
#include <iostream>
#include <memory>

class Duck {
public:
  virtual ~Duck() = default;
  virtual void display() const = 0;
  void performFly() { flyBehavior_->Fly(); }

  void PerformQuack() { quackBehavior->Quack(); }

  void SetFlyBehavior(std::unique_ptr<FlyBehavior> fb) {
    flyBehavior_ = std::move(fb);
  }

  void setQuackBehavior(std::unique_ptr<QuackBehavior> qb) {
    quackBehavior = std::move(qb);
  }

  void swim() { std::cout << "All ducks float, even decoys!" << std::endl; }

protected:
  std::unique_ptr<FlyBehavior> flyBehavior_;
  std::unique_ptr<QuackBehavior> quackBehavior;
};

#endif