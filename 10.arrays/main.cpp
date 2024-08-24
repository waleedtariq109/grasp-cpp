#include <iostream>

int main()
{
  // Array bounds

  // Read the array data beyond the bound
  /**
   * This will probably give some garbage value or crash your program
   */

  // Declare the integeres array
  int numbers[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  std::cout << "numbers[12]: " << numbers[12] << std::endl;

  std::cout << std::endl;

  //! Hell no, This will crash your program
  numbers[173829179] = 387738;
  std::cout << "numbers[173829179]: " << numbers[173829179] << std::endl;

  std::cout << "Program end" << std::endl;

  return 0;
}
