#include <iostream>

#include "square.h"

int main() {
  Square square(3);
  std::cout << "square sides: " << square.Surface() << std::endl;
}
