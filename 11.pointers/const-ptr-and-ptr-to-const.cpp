#include <iostream>

void printEmptyLines(int total_lines) {
  for (int i{0}; i < total_lines; ++i) {
    std::cout << std::endl;
  }
}

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

  printEmptyLines(2);

  // Example 1: We can modify the data and even modify the pointer itself
  int *p_number1{nullptr};
  int number1{23};

  p_number1 = &number1;
  std::cout << "Pointer and value pointed to are both modifiable" << std::endl;
  std::cout << "p_number1: " << p_number1 << std::endl;
  std::cout << "*p_number1: " << *p_number1 << std::endl;
  std::cout << "number1: " << number1 << std::endl;

  printEmptyLines(2);

  // Example 2: Chnage the pointed value through pointer
  std::cout << "Modifying the value pointed to p_number1 through the pointer" << std::endl;
  *p_number1 = 432;  // Modify the value through pointer
  std::cout << "p_number1: " << p_number1 << std::endl;
  std::cout << "*p_number: " << *p_number1 << std::endl;
  std::cout << "number1: " << number1 << std::endl;

  printEmptyLines(2);

  // Example 3: Change the pointed value through variable
  std::cout << "Modifying the value pointed to p_number1 through the variable" << std::endl;
  number1 = 88;  // Modify the variable value
  std::cout << "p_number1: " << p_number1 << std::endl;
  std::cout << "*p_number1: " << *p_number1 << std::endl;
  std::cout << "number1: " << number1 << std::endl;

  return 0;
}
