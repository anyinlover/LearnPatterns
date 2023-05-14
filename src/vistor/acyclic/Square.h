#pragma once
#include "AbstractVisitor.h"
#include "Shape.h"
#include "Visitor.h"

class Square : public Shape {
public:
  explicit Square(double side) : side_(side) { /* Checking*/
  }

  double side() const { return side_; }

  void accept(const AbstractVistor &v) override {
    if (auto const *sv = dynamic_cast<Visitor<Square> const *>(&v)) {
      sv->visit(*this);
    }
  }

private:
  double side_;
};