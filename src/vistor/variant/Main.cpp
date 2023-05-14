#include "Circle.h"
#include "DrawAllShapes.h"
#include "Shapes.h"
#include "Square.h"

int main() {
  Shapes shapes;
  shapes.emplace_back(Circle{2.3});
  shapes.emplace_back(Square{1.2});
  shapes.emplace_back(Circle{4.1});

  drawAllShapes(shapes);

  return 0;
}