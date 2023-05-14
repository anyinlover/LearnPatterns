#pragma once

#include "ShapeVisitor.h"

class Draw : public ShapeVisitor {
public:
  void visit(const Circle &c) const override;
  void visit(const Square &s) const override;
};