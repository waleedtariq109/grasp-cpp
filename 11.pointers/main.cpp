#include <iostream>

int main() {
  // How we used pointer so far
  int number{22};  // Stored in stack memory
  int *p_number{&number};

  std::cout << std::endl;
  std::cout << "Declaring Pointer and Assigning Address" << std::endl;
  std::cout << "number: " << number << std::endl;
  std::cout << "&number: " << &number << std::endl;
  std::cout << "p_number: " << p_number << std::endl;
  std::cout << "*p_number: " << *p_number << std::endl;

  int *p_number1;  // Uninitialized pointer, contain junk address
  int number1{12};
  p_number1 = &number1;  // Make it point to valid address

  std::cout << std::endl;
  std::cout << "Uninitialized pointer" << std::endl;
  std::cout << "*p_number1: " << *p_number1 << std::endl;

  return 0;
}
