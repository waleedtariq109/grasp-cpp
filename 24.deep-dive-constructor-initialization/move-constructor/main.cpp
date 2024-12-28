#include <iostream>

#include "point.h"

int main() {
  Point p1(std::move(Point(33.5, 66.7)));
  std::cout << "p1.x: " << *p1.getX() << std::endl;

  p1.printInfo();
}
