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

  // Concatenating two strings literals
  /**
   * This won't work and will turn into compiler error
   * because the string literal is expanding into char
   * array and we can't concate two array with + operator
   */

  std::cout << "Concatenating two strings literals" << std::endl;
  // std::string string3{"Hello" + " World"}; // Compiler Error

  // Few ways around string literals Concatenation
  std::cout << std::endl;
  std::string string5{"Hello World"};  // Make the string one literal
  std::string string6{
      "Hello"
      " World"};  // Put the literals side by side
  std::string string7{std::string{"Hello"} + " World"};
  std::string string8{std::string{"Hello"} + std::string{" World"}};

  std::cout << "string5: " << string5 << std::endl;
  std::cout << "string6: " << string6 << std::endl;
  std::cout << "string7: " << string7 << std::endl;
  std::cout << "string8: " << string8 << std::endl;

  using namespace std::string_literals;
  std::string string9{"Hello"s + " World"};

  std::string string10;
  {
    using namespace std::string_literals;
    string10 = "Hello"s + " World";
  }

  std::cout << "string9: " << string9 << std::endl;
  std::cout << "string10: " << string10 << std::endl;

  std::cout << std::endl;
  return 0;
}
