#pragma once

#include "ShapeVisitor.h"
class Shape {
public:
  Shape() = default;
  virtual ~Shape() = default;

  virtual void accept(const ShapeVisitor &v) = 0;
};