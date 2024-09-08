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

  /**
   * Let's say i have a const_int. So can i point a non const pointer
   * to a const int. Let's find out
   */
  //! non_const_p = &const_int; // You can't do that.

  /**
   * What this means?
   * const int *const_int_p{nullptr};
   *
   * This simply means it's a pointer to a const integer.
   * Maybe the variable which you are pointing to is non const
   *
   * Weather the variable is a const or non const but when you say
   * This pointer points to a const integer which means you can't
   * change the value of that variable through pointer. If the
   * varibale is non const i may change the value directly but
   * i can't change the value through pointer.
   *
   */

  int const_int_maybe{10};
  const int *const_int_p{nullptr};
  const_int_p = &const_int_maybe;

  std::cout << "const_int_maybe: " << const_int_maybe << std::endl;
  std::cout << "const_int_p pointing to the address of const_int_maybe: " << const_int_p << std::endl;

  // *const_int_p = 98;
  const_int_maybe = 87;
  std::cout << "const_int_maybe: " << const_int_maybe << std::endl;

  // Altough you can't change the value of const_int_maybe through pointer
  // but you can change the address of const_int_p and point it to somewhere
  // else

  int num{88};
  const_int_p = &num;
  std::cout << "const_int_p: " << const_int_p << std::endl;

  std::cout << std::endl;

  /**
   *
   * If you see the const keyword after the int then this will serve the same
   * purpose as well like there no difference.
   *
   */

  int int_var{78};
  int const *cost_p{&int_var};

  // This will also doing the same this.
  // pointer to a const

  /**
   * int *const p;
   *
   * This means it's a const pointer to a non const int.
   * We can modify the value of `number` through pointer
   * but we can't make this pointer to somewhere else because it's
   * a const pointer to a non const int.
   *
   */

  int number{69};
  int *const pointer{&number};

  std::cout << "Address of number: " << pointer << std::endl;
  std::cout << "*pointer: " << *pointer << std::endl;
  *pointer = 98;
  std::cout << "*pointer: " << *pointer << std::endl;

  int number2{96};
  // pointer = &number2; // Compiler Error

  /**
   * This also means pointer to a const int
   */

  int var{99};
  const int const *ptr{nullptr};
  ptr = &var;
  int var2{9};
  ptr = &var2;

  //------------------------------

  int var3{44};
  const int *const ptr1{&var3};
  // *ptr = 98;
  int var4{98};
  ptr = &var4;

  return 0;
}
