#include "square.h"

#include <iostream>

Square::Square(double side) : Square(side, "red", 9) {
  std::cout << "First" << std::endl;
}

Square::Square(double side, std::string color, int shading) : side(side), color(color), shading(shading) {
  std::cout << "Second" << std::endl;
}

Square::~Square() {
  std::cout << std::endl;
  std::cout << "Destructor called" << std::endl;
  std::cout << std::endl;
}

double Square::surface() const {
  return this->side * this->side;
}
