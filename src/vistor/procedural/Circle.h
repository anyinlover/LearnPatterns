#pragma once
#include "Point.h"
#include "Shape.h"

class Circle : public Shape {
public:
  explicit Circle(double radius) : Shape(circle), radius_(radius) { /*Check*/
  }

  double radius() const { return radius_; }

  Point center() const { return center_; }

private:
  double radius_;
  Point center_{};
};