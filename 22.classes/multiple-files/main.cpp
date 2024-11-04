#include <iostream>

#include "constant.h"
#include "cylinder.cpp"
#include "cylinder.h"

int main() {
  Cylinder cylinder1(2, 39);
  std::cout << "volume: " << cylinder1.volume() << std::endl;
}
