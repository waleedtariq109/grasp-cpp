#include <iostream>

int main()
{
  // Comma Operator
  /**
   * The comma operator combines two or more expression into one single expression
   * The return value of the operation is the value of it right operand
   */

  int increment{5};
  int number1{10};
  int number2{20};
  int number3{25};

  int result = (number1 *= ++increment, number2 - (++increment), number3 += ++increment);
  std::cout << number1 << std::endl;
  std::cout << number2 << std::endl;
  std::cout << number3 << std::endl;
  std::cout << result << std::endl;

  return 0;
}
