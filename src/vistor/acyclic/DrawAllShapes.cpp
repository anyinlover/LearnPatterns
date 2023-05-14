#include "DrawAllShapes.h"
#include "Draw.h"
#include "Shape.h"

void drawAllShapes(const std::vector<std::unique_ptr<Shape>> &shapes) {
  for (auto const &shape : shapes) {
    shape->accept(Draw{});
  }
}