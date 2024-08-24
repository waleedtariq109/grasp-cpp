#include <iostream>

int main()
{
  // Declare Character Arrays
  char message[6]{'h', 'e', 'l', 'l', 'o', '\0'};

  // Print message
  std::cout << "Message: ";
  for (auto c : message)
  {
    std::cout << c;
  }
  std::cout << std::endl;

  // Change character in array
  message[1] = 'a';
  std::cout << "Message: ";
  for (auto c : message)
  {
    std::cout << c;
  }

  std::cout << std::endl;

  std::cout << "Message: " << message << std::endl; // This will probably print garbage value after your array

  // If a characters array is null terminated, it's called C-String

  std::cout << std::endl;

  // 1st way of c-string
  char message1[]{'h', 'e', 'l', 'l', 'o', '\0'};
  std::cout << "sizeof() C-String 1: " << sizeof(message1) << std::endl;
  std::cout << "C-String 1: " << message1 << std::endl;

  std::cout << std::endl;

  // 2nd way of c-string
  char message2[6]{'h', 'e', 'l', 'l', 'o'};
  std::cout << "sizeof() C-String 1: " << sizeof(message2) << std::endl;
  std::cout << "C-String 1: " << message2 << std::endl;

  std::cout << std::endl;

  /**
   * This is not a c-string
   * As there is not null character
   */
  char message3[]{'h', 'e', 'l', 'l', 'o'};
  std::cout << "sizeof() Message3: " << sizeof(message3) << std::endl;
  std::cout << "Message 3: " << message3 << std::endl;

  std::cout << std::endl;

  char message4[]{'h', 'e', 'l', 'l', 'o', '\0'};
  std::cout << "sizeof() Message4: " << sizeof(message4) << std::endl;
  std::cout << "Message 4: " << message4 << std::endl;

  std::cout << std::endl;

  // String literals
  /**
   * The string literals are null terminated by the compiler
   */

  char message5[]{"Hello Babay how are you doing"};
  std::cout << "sizeof() Message5: " << sizeof(message5) << std::endl;
  std::cout << "Message5: " << message5 << std::endl;

  return 0;
}
