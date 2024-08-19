#include <iostream>

int main()
{
  // Decrementing loops

  const size_t COUNT{5};

  std::cout << "Incrementing for loop" << std::endl;
  for (size_t i{0}; i < COUNT; ++i)
  {
    std::cout << "i: " << i << std::endl;
  }

  std::cout << "Decrementing for loop" << std::endl;
  for (size_t i{COUNT}; i > 0; --i)
  {
    std::cout << "i: " << i << std::endl;
  }

  return 0;
}
