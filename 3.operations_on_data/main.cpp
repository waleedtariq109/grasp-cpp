#include <iostream>

int main() {
  // Basic operations

  // Addition
  int val1 {20};
  int val2 {30};

  int addition_result {val1 + val2};
  std::cout << "Addtion Result: " << addition_result << std::endl;

  // Subtraction
  int val3 {50};
  int val4 {30};

  int subtraction_result { val3 - val4 };
  std::cout << "Subtraction Result: " << subtraction_result << std::endl;

  // Multilication
  int val5 {2};
  int val6 {5};

  int multiplication_result { val5 * val6 };
  std::cout << "Multiplication Result: " << multiplication_result << std::endl;

  // Division
  int val7 {10};
  int val8 {5};

  int division_result { val7 / val8 };
  std::cout << "Division Result: " << division_result << std::endl;

  // Modulos
  int val9 {7};
  int val10 {2};

  int modulos_result { val9 % val10 };
  std::cout << "The result of modulos is: " << modulos_result << std::endl;

  /*
     3
  -------
2 -  7
  -  6
  -------
     1 -> Left over value -> In mathmatics the remainder is a amount (leftover) after perfoming some computation
          and the leftover value is called Remainder

          value / 2 % == 0 -> even
          value / 2 % != 0 -> odd
   */
    
  return 0;
}
