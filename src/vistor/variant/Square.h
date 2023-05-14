#pragma once
#include "Point.h"

class Square {
public:
  explicit Square(double side) : side_(side) { /* Checking*/
  }

  double side() const { return side_; }

  Point center() const { return center_; }

private:
  double side_;
  Point center_{};
};