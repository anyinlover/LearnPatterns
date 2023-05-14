#include "Draw.h"
#include <iostream> /* some graphics library*/

void Draw::visit(const Circle &c) const { std::cout << "draw a circle\n"; }
void Draw::visit(const Square &s) const { std::cout << "draw a square\n"; }