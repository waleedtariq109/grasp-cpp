#include <iostream>

int main()
{
  // Decalre an array of ints
  int scores[10]; // The 10 we specified is the size of an array

  // Read the Data
  std::cout << "Score[0]: " << scores[0] << std::endl; // Garbage Value
  std::cout << "Score[1]: " << scores[1] << std::endl; // Garbage Value

  std::cout << std::endl;

  // Read data with loop
  for (size_t i{0}; i < 10; ++i)
  {
    // Returns garbage value
    std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
  }

  std::cout << std::endl;

  // Write data
  scores[0] = 20;
  scores[1] = 21;
  scores[2] = 22;

  for (size_t i{0}; i < 10; ++i)
  {
    std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
  }

  std::cout << std::endl;

  // Write value using loop
  for (size_t i{0}; i < 10; ++i)
  {
    scores[i] = i * 2;
    std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
  }

  // Declare and initialize data at the same time
  std::cout << std::endl;
  std::cout << "Declare and initialize data at the same time" << std::endl;

  double salaries[5]{99.2, 12.8, 7.9, 82.3, 67.99};
  for (size_t i{0}; i < 5; ++i)
  {
    std::cout << "salaries[" << i << "]: " << salaries[i] << std::endl;
  }

  std::cout << std::endl;

  // Declare an array but won't initialize all elements
  /**
   * If we initialize the array and left some element uninitialized then these element will
   * get a value which is 0 by the compiler
   */
  int growth_rate[5]{22, 33, 12};
  for (size_t i{0}; i < 5; ++i)
  {
    std::cout << "growth_rate[" << i << "]: " << growth_rate[i] << std::endl;
  }

  return 0;
}
