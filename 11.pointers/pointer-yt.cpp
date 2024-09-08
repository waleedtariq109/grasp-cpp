#include <iostream>

int main() {
  /**
   * Non Const Pointer to Non const variable
   *
   * This means we can change the address of pointer because it's a non const pointer
   * and we also change the value through pointer which it's pointed to.
   *
   */

  std::cout << std::endl;

  int non_const_int{87};
  int *non_const_p{nullptr};
  non_const_p = &non_const_int;
  std::cout << "non_const_p pointing to the address of non_const_int: " << non_const_p << std::endl;

  std::cout << std::endl;

  /**
   * Because this is a non const pointer to a non const int we can change the
   * value of non const int through pointer and we also change the address of
   * non const pointer and make it to point somewhere else.
   */

  std::cout << "non_const_int: " << non_const_int << std::endl;
  *non_const_p = 76;
  std::cout << "non_const_int: " << non_const_int << std::endl;
  std::cout << "*non_const_p: " << *non_const_p << std::endl;

  int another_non_const_int{66};
  non_const_p = &another_non_const_int;
  std::cout << "*non_const_p: " << *non_const_p << std::endl;

  non_const_int = 87;

  std::cout << std::endl;

  return 0;
}
