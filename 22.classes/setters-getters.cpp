#include <iostream>

const float PI = 3.1415f;

class Cylinder {
 public:
  Cylinder() = default;
  Cylinder(double radiusParam, double heightParam) {
    baseRadius = radiusParam;
    height = heightParam;
  }

  double volume() {
    return PI * baseRadius * baseRadius * height;
  }

  double getBaseRadius() {
    return baseRadius;
  }

  double getHeight() {
    return height;
  }

  void setBaseRadius(double radiusParam) {
    baseRadius = radiusParam;
  }

  void setHeight(double heightParam) {
    height = heightParam;
  }

 private:
  double baseRadius = 1;
  double height = 1;
};

int main() {
  Cylinder cylinder1(2, 3);

  std::cout << "base radius: " << cylinder1.getBaseRadius() << std::endl;
  std::cout << "height: " << cylinder1.getHeight() << std::endl;

  cylinder1.setBaseRadius(3);
  cylinder1.setHeight(4);

  std::cout << "base radius: " << cylinder1.getBaseRadius() << std::endl;
  std::cout << "height: " << cylinder1.getHeight() << std::endl;
}
