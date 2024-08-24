#include <iostream>

int main()
{
  // Generating Random number

  /**
   * The std::rand() will return a integer between 0 ~ RAND_MAX
   * The value of RAND_MAX is depending system to system
   * To check the value of RAND_MAX we can `cout` the RAND_MAX
   *
   * The RAND_MAX is already defines in standard C++ linrary
   */

  int random_number = std::rand(); // 0 ~ RAND_MAX
  std::cout << "Random Number: " << random_number << std::endl;

  random_number = std::rand();
  std::cout << "Random Number: " << random_number << std::endl;

  std::cout << std::endl;

  return 0;
}
