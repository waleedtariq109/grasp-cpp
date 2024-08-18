#include <iostream>

int main()
{
  // For Loops

  // Noob way
  /*
  std::cout << "C++: The GOAT Language" << std::endl;
  std::cout << "C++: The GOAT Language" << std::endl;
  std::cout << "C++: The GOAT Language" << std::endl;
  std::cout << "C++: The GOAT Language" << std::endl;
  std::cout << "C++: The GOAT Language" << std::endl;
  std::cout << "C++: The GOAT Language" << std::endl;
  */

  // Pro Way
  for (unsigned int i{0}; i < 10; ++i)
  {
    std::cout << "C++: The GOAT Language" << std::endl;
  }

  for (size_t i{0}; i < 10; ++i)
  {
    std::cout << "Hello C++" << std::endl;
  }
  return 0;
}
