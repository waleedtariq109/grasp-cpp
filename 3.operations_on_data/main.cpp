#include <iostream>

int main()
{
  // Output formatting

  std::cout << "Hello";
  std::cout << "World";

  std::cout << std::endl;

  std::cout << "------------" << std::endl;

  std::cout << "Hello" << std::endl;
  std::cout << "World" << std::endl;

  std::cout << std::endl;

  std::cout << "Hello\n";
  std::cout << "World\n";

  std::cout << std::endl;

  // std::flush

  // std::flush, flushes the output buffer directly to the terminal
  std::cout << "Flush this message" << std::endl
            << std::flush;

  return 0;
}
