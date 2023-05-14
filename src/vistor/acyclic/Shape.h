#pragma once

#include "AbstractVisitor.h"
class Shape {
public:
  Shape() = default;
  virtual ~Shape() = default;

  virtual void accept(const AbstractVistor &v) = 0;
};