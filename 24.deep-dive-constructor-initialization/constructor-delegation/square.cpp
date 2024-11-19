#include "square.h"

#include <iostream>

Square::Square(double side) :
    side(side) {}

Square::Square(double side, std::string color, int shading) :
    side(side), color(color), shading(shading) {}

Square::~Square() {
  std::cout << std::endl;
  std::cout << "Destructor called" << std::endl;
  std::cout << std::endl;
}

double Square::surface() const {
  return this->side * this->side;
}
