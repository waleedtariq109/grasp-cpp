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

  // Using size_t
  /**
   * NOTE: size_t is just a type defination or type declaration for unsigned long which is 8 bytes
   * size_t itself is not a type but just a type defination
   */

  for (size_t i{0}; i < 10; ++i)
  {
    std::cout << "Hello C++" << std::endl;
  }

  // Global Iterator

  size_t j{0};
  for (j; j < 10; ++j)
  {
    std::cout << "Hello Babay" << std::endl;
  }
  std::cout << j << std::endl;

  j = 0;
  // Without iterator
  for (; j < 10; ++j)
  {
    std::cout << "Hello Babay" << std::endl;
  }
  std::cout << j << std::endl;

  // Loop with not hard coded condition value

  const size_t LOOP_COUNT{10};
  for (size_t k{0}; k < LOOP_COUNT; ++k)
  {
    std::cout << "Hello Bhapoo" << std::endl;
  }

  return 0;
}
