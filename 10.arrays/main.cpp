#include <iostream>

int main()
{
  // Declare Character Arrays
  char message[5]{'h', 'e', 'l', 'l', 'o'};

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

  return 0;
}
