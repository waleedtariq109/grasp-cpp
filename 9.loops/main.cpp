#include <iostream>

int main()
{
  // Range based for loops
  int bag_of_values[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // This is a collection of integers

  // The value variable will assigned a value of bag_of_values in each iteration
  for (int value : bag_of_values)
  {
    std::cout << "Value: " << value << std::endl;
  }

  std::cout << std::endl;

  std::cout << "---------------" << std::endl;

  std::cout << std::endl;

  // We can even give the value in range based loop litrally
  for (int value : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10})
  {
    std::cout << "Value: " << value << std::endl;
  }

  return 0;
}
