#include "cylinder.h"

#include "constant.h"

Cylinder::Cylinder(double radius, double height) : baseRadius(radius), baseHeight(height) {
  // baseRadius and baseHeight are already initialized
}

double Cylinder::getBaseHeight() const {
  return this->baseHeight;
}

double Cylinder::getBaseRadius() const {
  return this->baseRadius;
}

void Cylinder::setBaseHeight(double height) {
  this->baseHeight = height;
}

void Cylinder::setBaseRadius(double radius) {
  this->baseRadius = radius;
}

double Cylinder::volume() {
  return PI * baseRadius * baseRadius * baseHeight;
}
