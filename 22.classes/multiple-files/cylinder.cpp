#include "cylinder.h"

Cylinder::Cylinder(double radiusParam, double heightParam) {
  baseRadius = radiusParam;
  height = heightParam;
}

double Cylinder::getBaseRadius() {
  return baseRadius;
}

double Cylinder::getHeight() {
  return height;
}

void Cylinder::setBaseRadius(double radiusParam) {
  baseRadius = radiusParam;
}

void Cylinder::setHeight(double heightParam) {
  height = heightParam;
}

double Cylinder::volume() {
  return PI * baseRadius * baseRadius * height;
}