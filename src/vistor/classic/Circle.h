#pragma once
#include "Shape.h"

class Circle : public Shape {
public:
  explicit Circle(double radius) : radius_(radius) { /*Check*/
  }

  double radius() const { return radius_; }

  void accept(const ShapeVisitor &v) override { v.visit(*this); }

private:
  double radius_;
};