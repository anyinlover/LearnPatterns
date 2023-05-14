#pragma once
#include "AbstractVisitor.h"
#include "Shape.h"
#include "Visitor.h"

class Circle : public Shape {
public:
  explicit Circle(double radius) : radius_(radius) { /*Check*/
  }

  double radius() const { return radius_; }

  void accept(const AbstractVistor &v) override {
    if (auto const *cv = dynamic_cast<const Visitor<Circle> *>(&v)) {
      cv->visit(*this);
    }
  }

private:
  double radius_;
};