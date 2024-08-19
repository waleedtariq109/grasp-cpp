#include <iostream>

int main()
{
  // Infinite loop

  // for loop
  for (size_t i{0};; ++i)
  {
    std::cout << i << ": C++: The GOAT" << std::endl;
  }

  /**
   *
   * If we don't add condition in loop or add a condition which always true
   * then our loop become infinite loop which means it never stops until
   * the currently running program is crashed or terminate manually
   *
   */

  return 0;
}
