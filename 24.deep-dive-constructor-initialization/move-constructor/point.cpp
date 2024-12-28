#include "point.h"

#include <iostream>

Point::Point(double x, double y) : x(new double(x)), y(new double(y)) {
  std::cout << "Constructor called" << std::endl;
}

Point::Point(const Point& sourcePoint) : x(new double(*sourcePoint.getX())), y(new double(*sourcePoint.getY())) {
  std::cout << "Copy constructor called" << std::endl;
}

Point::~Point() {
  delete x;
  delete y;
}

const double* Point::getX() const {
  return this->x;
}

const double* Point::getY() const {
  return this->y;
}

void Point::printInfo() const {
  std::cout << "x: " << this->x << std::endl;
  std::cout << "y: " << this->y << std::endl;
}

void Point::setX(double x) {
  *this->x = x;
}

void Point::setY(double y) {
  *this->y = y;
}
