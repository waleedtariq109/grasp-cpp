#include <iostream>

int main()
{
  // Break and Continue

  // Terminating the loop
  std::cout << "The break statement" << std::endl;
  for (size_t i{0}; i < 20; ++i)
  {
    std::cout << "index: " << i << std::endl;
    // Terminate or stop the loop if i == 6
    if (i == 6)
      break;
  }
  return 0;
}
