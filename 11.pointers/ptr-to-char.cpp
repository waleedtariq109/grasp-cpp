#include <iostream>

int main() {
  const char *message{"Hello World!"};

  std::cout << "message: " << message << std::endl;
  std::cout << "*messaage: " << *message << std::endl;

  // *message = 'B'; -> Compiler error

  /**
   * If you really want to change the value of your char array then use simple char array
   * and change the character by accessing the specific index
   */

  char str[]{"Hi!"};
  str[0] = 'B';

  std::cout << str << std::endl;

  return 0;
}
