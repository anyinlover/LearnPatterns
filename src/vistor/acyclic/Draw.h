#pragma once

#include "AbstractVisitor.h"
#include "Circle.h"
#include "Square.h"
#include "Visitor.h"
#include <iostream>

class Draw : public AbstractVistor,
             public Visitor<Circle>,
             public Visitor<Square> {
public:
  void visit(const Circle &c) const override { std::cout << "draw a circle\n"; }
  void visit(const Square &c) const override { std::cout << "draw a square\n"; }
};