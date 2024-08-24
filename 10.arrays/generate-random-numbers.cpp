#include <ctime>
#include <iostream>

int main() {
  // Generating Random number

  /**
   * The std::rand() will return a integer between 0 ~ RAND_MAX
   * The value of RAND_MAX is depending system to system
   * To check the value of RAND_MAX we can `cout` the RAND_MAX
   *
   * The RAND_MAX is already defines in standard C++ linrary
   */

  std::srand(std::time(0));  // Seed to generate random number on every execuation

  int random_number = std::rand();  // 0 ~ RAND_MAX
  std::cout << "Random Number: " << random_number << std::endl;

  random_number = std::rand();
  std::cout << "Random Number: " << random_number << std::endl;

  std::cout << std::endl;

  // Generating random number
  for (size_t i{0}; i < 10; ++i) {
    random_number = std::rand();
    std::cout << "Random Number: " << random_number << std::endl;
  }

  std::cout << std::endl;
  std::cout << std::endl;

  // Generate unique random number with proper seeding
  int rand_number = std::rand() % 10 + 1;  // Randon number b/w [1 ~ 10]

  for (size_t i{0}; i < 10; ++i) {
    rand_number = std::rand() % 10 + 1;
    std::cout << "Randon number: " << rand_number << std::endl;
  }

  std::cout << std::endl;
  std::cout << std::endl;

  return 0;
}
