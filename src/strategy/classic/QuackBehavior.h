#pragma once
class QuackBehavior {
public:
  virtual ~QuackBehavior() = default;
  virtual void quack() const = 0;
};
