#include <iostream>

int main()
{

  /**
   * Requirements for Calculator
   *
   * 1: We need a operation which user want's to perform -> (+,-,*,/)
   * 2: We need both operands -> value1, value2
   * 3: Process the given values and show the output
   */

  char operation;
  double operand1;
  double operand2;
  bool end{false};

  std::cout << std::endl;
  std::cout << "Welcome to Babay Calculator" << std::endl;
  std::cout << std::endl;

  while (end == false)
  {
    // Processing
    std::cout << "What operation you want to make" << std::endl;
    std::cout << "+, -, * and / are supported. Which operation you want to perform" << std::endl;
    std::cout << "You operation" << std::endl;
    std::cin >> operation;

    std::cout << std::endl;
    std::cout << "Now we want to know your operands" << std::endl;
    std::cout << "Operand 1" << std::endl;
    std::cin >> operand1;
    std::cout << "Operand 2" << std::endl;
    std::cin >> operand2;

    switch (operation)
    {
    case '+':
    {
      std::cout << "Here's your output" << std::endl;
      std::cout << operand1 << " + " << operand2 << " = " << operand1 + operand2 << std::endl;
      break;
    }
    case '-':
    {
      std::cout << "Here's your output" << std::endl;
      std::cout << operand1 << " - " << operand2 << " = " << operand1 - operand2 << std::endl;
      break;
    }
    case '*':
    {
      std::cout << "Here's your output" << std::endl;
      std::cout << operand1 << " * " << operand2 << " = " << operand1 * operand2 << std::endl;
      break;
    }
    case '/':
    {
      std::cout << "Here's your output" << std::endl;
      std::cout << operand1 << " / " << operand2 << " = " << operand1 / operand2 << std::endl;
      break;
    }
    default:
    {
      std::cout << "Error: Invalid operation: " << operation << std::endl;
    }
    }

    std::cout << "Do you want to use Babay Calculator ? Continue (Y | N)" << std::endl;
    char go_on;
    std::cin >> go_on;
    if (go_on == 'Y' || go_on == 'y')
    {
      end = false;
    }
    else
    {
      end = true;
    }
  }
  std::cout << "Thankyou for using babay calculator. Good bye!" << std::endl;

  return 0;
}
