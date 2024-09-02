#include <iostream>

int main() {
  // Non const vaiable
  std::cout << std::endl;
  std::cout << "Raw variable that can be modified" << std::endl;

  int number{5};  // Not a const and value can be changes
  std::cout << "number: " << number << std::endl;
  std::cout << "&number: " << &number << std::endl;

  // Modify the value
  number = 15;
  number += 7;

  // Print number and memory address
  std::cout << "number: " << number << std::endl;
  std::cout << "&number: " << &number << std::endl;

  return 0;
}
