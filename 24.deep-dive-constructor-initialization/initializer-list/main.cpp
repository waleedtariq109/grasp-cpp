#include <iostream>

#include "cylinder.h"

int main() {
  Cylinder cylinder1;

  std::cout << "baseRadius: " << cylinder1.getBaseRadius() << std::endl;
  std::cout << "baseHeight: " << cylinder1.getBaseHeight() << std::endl;
  std::cout << "volume: " << cylinder1.volume() << std::endl;
}
