#pragma once
#include "Shape.h"

class Square : public Shape {
public:
  explicit Square(double side) : side_(side) { /* Checking*/
  }

  double side() const { return side_; }

  void accept(const ShapeVisitor &v) override { v.visit(*this); }

private:
  double side_;
};