#include <iostream>
#include <string>

int main() {
  std::cout << std::endl;

  // Concatenating two strings: The + operator
  std::cout << "Concatenating two strings" << std::endl;
  std::string string1{"Hello"};
  std::string string2{"World"};

  std::string message = {string1 + " my " + string2};

  std::cout << "message: " << message << std::endl;

  std::cout << std::endl;
  return 0;
}
