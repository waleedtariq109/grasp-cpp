#include "cylinder.h"

#include "constant.h"

Cylinder::Cylinder(double radiusParam, double heightParam) {
  baseRadius = radiusParam;
  height = heightParam;
}

double Cylinder::volume() {
  return PI * baseRadius * baseRadius * height;
}

double Cylinder::getBaseRadius() {
  return baseRadius;
}

double Cylinder::getHeight() {
  return height;
}

void Cylinder::setBaseRadius(double baseRadiusParam) {
  baseRadius = baseRadiusParam;
}

void Cylinder::setHeight(double heightParam) {
  height = heightParam;
}
