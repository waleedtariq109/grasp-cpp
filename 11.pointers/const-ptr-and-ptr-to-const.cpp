#include <iostream>

void printEmptyLines(int num) {
  for (size_t i = 0; i < num; ++i) {
    std::cout << std::endl;
  }
}

int main() {
  // A non const variable that can be modified
  printEmptyLines(1);
  std::cout << "Raw variable that can be modified" << std::endl;

  int number{5};  // We can change this anywhere we want
  std::cout << "number: " << number << std::endl;
  std::cout << "*number: " << &number << std::endl;

  // Modify the number variable
  number = 15;
  number += 7;

  // Access the modified number value
  std::cout << "number: " << number << std::endl;
  std::cout << "*number: " << &number << std::endl;

  printEmptyLines(2);

  // Pointer: We can modify the and also point this to somewhere else
  int *p_number1{nullptr};
  int number1{23};

  p_number1 = &number1;
  std::cout << "Pointer and value pointed to - BOTH MODIFIABLE -" << std::endl;
  std::cout << "p_number1: " << p_number1 << std::endl;
  std::cout << "*p_number1: " << *p_number1 << std::endl;
  std::cout << "number1: " << number1 << std::endl;

  printEmptyLines(2);

  // Change the value through pointer
  std::cout << "Modify the value pointed to p_number1 through the pointer" << std::endl;
  *p_number1 = 432;
  std::cout << "p_number1: " << p_number1 << std::endl;
  std::cout << "*p_number1: " << *p_number1 << std::endl;
  std::cout << "number1: " << number1 << std::endl;

  printEmptyLines(2);

  // Changing the pointer to point somewhere else
  std::cout << "Chaning the pointer to point somewhere else" << std::endl;
  int number2{99};
  p_number1 = &number2;
  std::cout << "p_number1: " << p_number1 << std::endl;
  std::cout << "*p_number1: " << *p_number1 << std::endl;
  std::cout << "number2: " << number2 << std::endl;

  printEmptyLines(2);

  return 0;
}
