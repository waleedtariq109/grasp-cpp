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

  // ? Non const pointer to the non const data

  // Pointer: We can modify the and also point this to somewhere else
  int *p_number1{nullptr};
  int number1{23};

  p_number1 = &number1;
  std::cout << "Pointer and value pointed to - BOTH MODIFIABLE -" << std::endl;
  std::cout << "p_number1: " << p_number1 << std::endl;    // Address: 0x....
  std::cout << "*p_number1: " << *p_number1 << std::endl;  // D-REF: Value - 23
  std::cout << "number1: " << number1 << std::endl;        // Value of number1 - 23

  printEmptyLines(2);

  // Change the value through pointer
  std::cout << "Modify the value pointed to p_number1 through the pointer" << std::endl;
  *p_number1 = 432;
  std::cout << "p_number1: " << p_number1 << std::endl;    // Address: 0x....
  std::cout << "*p_number1: " << *p_number1 << std::endl;  // D-REF: Value - 432
  std::cout << "number1: " << number1 << std::endl;        // Value of number1 which is now 432

  printEmptyLines(2);

  // Changing the pointer to point somewhere else
  std::cout << "Chaning the pointer to point somewhere else" << std::endl;
  int number2{99};
  p_number1 = &number2;
  std::cout << "p_number1: " << p_number1 << std::endl;    // Address: 0x....
  std::cout << "*p_number1: " << *p_number1 << std::endl;  // D-REF: Value - 99
  std::cout << "number2: " << number2 << std::endl;        // Value of number 2 - 99

  printEmptyLines(2);

  /**
   * Pointer to const
   *
   * Pointer pointing to const data which means we can cannot change the
   * through the pointer
   */

  std::cout << "Pointer is modifiable but the pointed value is const" << std::endl;
  int number3{635};
  const int *p_number2{&number3};  // Pointer to const
  /**
   * We can't change number3 with p_number2 pointer but if number3 is also a const then alway add
   * const keyword with them explictly to make your intensions clear.
   *
   * In simple words const int *p means the pointer itself is const but the
   * it's pointed is maybe const or maybe non const
   */
  std::cout << "p_number2: " << p_number2 << std::endl;
  std::cout << "*p_number2: " << *p_number2 << std::endl;

  // If we trying to modify the number3 through pointer we will get an error
  printEmptyLines(1);
  std::cout << "Modifying the value pointed to by p_number2 pointer" << std::endl;
  //! *p_number2 = 999; //Compiler Error

  /**
   * Now as we know we can't change the data of varibale pointed to by
   * p_number2 pointer but we can make this pointer to point somewhere else
   */

  int number4{987};
  p_number2 = &number4;
  std::cout << "p_number2: " << p_number2 << std::endl;
  std::cout << "*p_number2: " << *p_number2 << std::endl;

  /**
   * There is another thing which i want to make clear is
   * add const keyword before or after int in pointer is same
   * there is no difference in there
   */

  int number5{10};
  int const *p_number3{&number5};  // Pointer to const

  std::cout << "number5: " << number5 << std::endl;
  std::cout << "p_number3: " << p_number3 << std::endl;
  std::cout << "*p_number3: " << *p_number3 << std::endl;

  /**
   * If we are trying to modifying the value of number5 through pointer
   * we will get an compiler error even tough the number5 itself is not
   * const but when we define a variable like this:
   *
   * int const *p_number3{&number5};
   * or
   * const int *p_number3{&number5};
   *
   * This means this pointer is point to the const. So the compiler will think
   * the value pointed to is const so it won't let us to change or modify the
   * value through pointer.
   *
   */

  //! Compiler error
  // *p_number3 = 88;

  // Altough we can direcrtly change the number5
  number5 = 99;
  std::cout << "number5: " << number5 << std::endl;
  return 0;
}
