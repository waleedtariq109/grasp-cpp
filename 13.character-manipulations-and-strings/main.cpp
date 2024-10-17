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

  /**
   * The "s" suffix in C++ converts a C-style string (i.e., a string literal like "Hello")
   * into a std::string object. This is part of user-defined literals in C++.
   */

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

  /**
   * The std::string is a compund type so it has some properties
   * and behaviour which we can use such as append
   */
  // Using the append method
  std::cout << "Using the append method" << std::endl;
  std::string string11{"Hello"};
  std::string string12{" World"};
  std::string string13{string11.append(string12)};
  std::cout << "string13: " << string13 << std::endl;

  std::string string14{std::string{"Hello"}.append(" World")};
  std::cout << "string14: " << string14 << std::endl;

  std::cout << std::endl;
  return 0;
}
