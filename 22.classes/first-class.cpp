#include <iostream>

const double PI{3.1415};

class Cylinder {
 public:
  double baseRadius{0};
  double height{0};

  double volume() {
    return PI * baseRadius * baseRadius * height;
  }
};

int main() {
  Cylinder cylinder1;

  std::cout << "volume: " << cylinder1.volume() << std::endl;

  cylinder1.baseRadius = 2.3;
  cylinder1.height = 7.7;

  std::cout << "volume: " << cylinder1.volume() << std::endl;

  return 0;
}
