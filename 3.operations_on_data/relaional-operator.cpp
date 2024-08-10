#include <iostream>

int main() {
  // Relational Operators
  /*
    In C++ or any other programming language, relational operators are used to compare two values.
    These operators return a boolean value: true or false.

    '=='  Equality Operator: Used to check if two values are equal.
    '!='  Inequality Operator: Used to check if two values are not equal.
    '<'   Less Than Operator: Used to check if the first value is less than the second value.
    '<='  Less Than or Equal To Operator: Used to check if the first value is less than or equal to the second value.
    '>'   Greater Than Operator: Used to check if the first value is greater than the second value.
    '>='  Greater Than or Equal To Operator: Used to check if the first value is greater than or equal to the second value.
  */

  int number1 {45};
  int number2 {60};

  std::cout << "Number 1: " << number1 << std::endl;
  std::cout << "Number 2: " << number2 << std::endl;

  std::cout << std::boolalpha;
  std::cout << "Equal: " << (number1 == number2) << std::endl;
  std::cout << "Not Equal: " << (number1 != number2) << std::endl;
  std::cout << "Less than: " << (number1 < number2) << std::endl;
  std::cout << "Less than Equal: " << (number1 <= number2) << std::endl;

  return 0;
}
