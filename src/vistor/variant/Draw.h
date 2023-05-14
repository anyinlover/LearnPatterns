#include "Circle.h"
#include "Shape.h"
#include <iostream>

struct Draw {
  void operator()(const Circle &c) const { std::cout << "draw a circle\n"; }
  void operator()(const Square &s) const { std::cout << "draw a square\n"; }
};