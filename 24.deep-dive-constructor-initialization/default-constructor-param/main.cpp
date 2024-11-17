#include <iostream>

#include "cylinder.h"

int main() {
  Cylinder cylinder1(3.4, 5.6);
  std::cout << "volume: " << cylinder1.volume() << std::endl;
}
