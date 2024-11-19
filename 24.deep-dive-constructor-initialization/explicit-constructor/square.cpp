#include "square.h"

#include <iostream>

Square::Square(double side) :
    side{side} {
    };

Square::~Square() {
  std::cout << "Destructor called" << std::endl;
}

double Square::Surface() const {
  return this->side * this->side;
}
