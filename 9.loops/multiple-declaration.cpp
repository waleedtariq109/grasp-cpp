#include <iostream>

int main()
{
  // Multiple for loop declaration

  for (size_t i{0}, x{5}, y{22}; y > 15; ++i, y -= 1, x += 5)
  {
    std::cout << "sizeof(i): " << sizeof(i) << std::endl;
    std::cout << "sizeof(x): " << sizeof(x) << std::endl;
    std::cout << "sizeof(y): " << sizeof(y) << std::endl;
    std::cout << "------------------" << std::endl;
    std::cout << "i: " << i << "x: " << x << "y: " << y << std::endl;
  }

  return 0;
}
