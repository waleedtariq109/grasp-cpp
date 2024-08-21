#include <iostream>

int main()
{
  // Decalre an array of ints
  int scores[10]; // The 10 we specified is the size of an array

  // Read the Data
  std::cout << "Score[0]: " << scores[0] << std::endl;
  std::cout << "Score[1]: " << scores[1] << std::endl;

  std::cout << std::endl;

  // Read data with loop
  for (size_t i{0}; i < 10; ++i)
  {
    std::cout << "scores[" << i << "]: " << i << scores[i] << std::endl;
  }

  std::cout << std::endl;

  return 0;
}
