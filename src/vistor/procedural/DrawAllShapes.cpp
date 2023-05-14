#include "DrawAllShapes.h"
#include "Circle.h"
#include "DrawCircle.h"
#include "DrawSquare.h"
#include "Square.h"

void drawAllShapes(const std::vector<std::unique_ptr<Shape>> &shapes) {
  for (auto const &shape : shapes) {
    switch (shape->getType()) {
    case circle:
      draw(static_cast<Circle const &>(*shape));
      break;
    case square:
      draw(static_cast<Square const &>(*shape));
      break;
    }
  }
}