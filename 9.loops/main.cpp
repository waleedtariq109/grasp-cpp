#include <iostream>

int main()
{
  // Break and Continue

  // Terminating the loop
  std::cout << "The break statement" << std::endl;
  for (size_t i{0}; i < 20; ++i)
  {
    // Terminate or stop the loop if i == 6
    if (i == 6)
      break;
    std::cout << "index: " << i << std::endl;
  }

  std::cout << std::endl;

  // Skip the iteration
  std::cout << "Skip the specific iteration" << std::endl;
  for (size_t i{0}; i < 10; ++i)
  {
    // Skip the 6 element or iteration
    if (i == 6)
      continue;
    std::cout << "index: " << i << std::endl;
  }

  size_t i{0};
  while (i < 20)
  {
    if (i == 5)
    {
      ++i;
      continue;
    }
    if (i == 16)
    {
      break;
    }

    std::cout << "index: " << i << std::endl;
    ++i;
  }

  return 0;
}
