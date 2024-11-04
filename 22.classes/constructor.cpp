#include <iostream>

const double PI{3.1415};

class Cylinder {
 public:
  Cylinder() {  // Defualt Constructor
    baseRadius = 2;
    height = 2;
  }

  Cylinder(double radiusParam, double heightParam) {
    baseRadius = radiusParam;
    height = heightParam;
  }

  double volume() {
    return PI * baseRadius * baseRadius * height;
  }

 private:
  double baseRadius{1};
  double height{1};
};

int main() {
  Cylinder cylinder1(3, 4);
  std::cout << "volume: " << cylinder1.volume() << std::endl;
}
