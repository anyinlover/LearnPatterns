#pragma once
class FlyBehavior {
public:
  virtual ~FlyBehavior() = default;
  virtual void fly() const = 0;
};
