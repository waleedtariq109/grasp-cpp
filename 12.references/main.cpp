#include <iostream>

int main() {
  // Non const reference

  std::cout << std::endl;
  std::cout << "Non const reference" << std::endl;

  int age{23};
  int& ageRef{age};

  std::cout << "Modify the original value through reference" << std::endl;

  ++ageRef;  // Modify value through reference

  std::cout << "age: " << age << std::endl;
  std::cout << "ageRef: " << ageRef << std::endl;

  std::cout << std::endl;

  // Const Reference
  /**
   * If our reference is const then we cannot change the value of
   * original value through reference but we can change the value
   * of our original varible.
   *
   * There is also no such thing; const reference to const just like
   * pointers
   *
   */
  int age1{23};
  const int& constAgeRef{age1};

  std::cout << "age: " << age << std::endl;
  std::cout << "constAgeRef: " << constAgeRef << std::endl;
  std::cout << std::endl;

  /**
   * If we are trying to modify age1 through reference then
   * we will get a compiler error
   */

  // constAgeRef++; // Compiler Error

  /**
   * Altough our reference is const but we can change the
   * value of the original variable.
   *
   * There is also no such rule like we have to make our
   * variable const in order to established a const reference
   */

  age1++;

  std::cout << "age: " << age << std::endl;
  std::cout << "constAgeRef: " << constAgeRef << std::endl;
  std::cout << std::endl;

  return 0;
}
