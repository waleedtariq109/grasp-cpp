#include <iostream>

// Logical Operators
/*
    In C++ or any other programming language, logical operators are used to perform logical operations
    on boolean expressions. These operators return a boolean value: true or false.

    '&&'  Logical AND Operator: Returns true if both the operands are true.
    '||'  Logical OR Operator: Returns true if at least one of the operands is true.
    '!'   Logical NOT Operator: Reverses the logical state of its operand. If the operand is true, it returns false;
          if the operand is false, it returns true.
*/

// Example usage:

int main()
{
  bool a = true;
  bool b = false;

  // Logical AND
  bool result1 = a && b;
  std::cout << "Result of a && b: " << result1 << std::endl; // Output: 0 (false)

  // Logical OR
  bool result2 = a || b;
  std::cout << "Result of a || b: " << result2 << std::endl; // Output: 1 (true)

  // Logical NOT
  bool result3 = !a;
  std::cout << "Result of !a: " << result3 << std::endl; // Output: 0 (false)

  bool result4 = !b;
  std::cout << "Result of !b: " << result4 << std::endl; // Output: 1 (true)

  return 0;
}
