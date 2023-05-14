#pragma once
#include <functional>
#include <iostream>
#include <memory>

class Duck {
public:
  using FlyBehavior = std::function<void()>;
  using QuackBehavior = std::function<void()>;
  virtual ~Duck() = default;
  virtual void display() const = 0;
  void performFly() { flyBehavior_(); }

  void performQuack() { quackBehavior_(); }

  void setFlyBehavior(FlyBehavior fb) { flyBehavior_ = std::move(fb); }

  void setQuackBehavior(QuackBehavior qb) { quackBehavior_ = std::move(qb); }

  void swim() { std::cout << "All ducks float, even decoys!\n"; }

protected:
  FlyBehavior flyBehavior_;
  QuackBehavior quackBehavior_;
};
