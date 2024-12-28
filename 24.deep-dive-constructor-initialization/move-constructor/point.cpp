#include "point.h"

#include <iostream>

Point::Point(double x, double y) : x(new double(x)), y(new double(y)) {
  std::cout << "Constructor called" << std::endl;
}

Point::~Point() {
  this->x = nullptr;
  this->y = nullptr;
}

const double* Point::getX() const {
  return this->x;
}

const double* Point::getY() const {
  return this->y;
}
