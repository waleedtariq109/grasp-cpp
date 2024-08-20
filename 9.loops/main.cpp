#include <iostream>

int main()
{
  // Range base loop with initiaizer
  // This feaure is introduces in c++20

  // Range base for loop without initializer
  int multiplier{3};
  for (int value : {1, 2, 3, 4, 5})
  {
    std::cout << "value: " << value * multiplier << std::endl;
  }
  std::cout << multiplier << std::endl;

  std::cout << std::endl;

  // Range base for loop with initializer
  for (int mtx{3}; int value : {1, 2, 3, 4, 5})
  {
    std::cout << "value: " << value * mtx << std::endl;
  }

  return 0;
}
