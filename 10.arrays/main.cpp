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

  std::cout << "Message: " << message << std::endl;

  return 0;
}
