#include "DrawAllShapes.h"
#include "Draw.h"

void drawAllShapes(const Shapes &shapes) {
  for (auto const &shape : shapes) {
    std::visit(Draw{}, shape);
  }
}