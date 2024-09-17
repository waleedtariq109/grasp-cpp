#include <iostream>

int main() {
  /**
   * int *p_number;
   * It is not recommended to just declare a variable; it is recommended
   * to always initialize a pointer because if we don't, the pointer may
   * point to an unintended memory address.
   *
   * Or alternatively we could use the braced initialization because if we
   * use braced initialization it will initialize a pointer with zero equivalent
   * value which ultimately means the nullptr
   */

  /**
   * The braced initialization will initialize pointer with nullptr
   * if we don't explicitly initialize a pointer with some address or nullptr
   */

  // Implicit initialization
  int *p_number{};
  double *p_fractional_number{};

  // Explicit initialization
  int *p_number1{nullptr};
  double *p_fractional_number1{nullptr};

  /**
   * Pointers to different variable are of the same size which means
   * if we have a int pointer or double pointer the size of both pointers
   * are same even tough the size of int is 4 byte and size of double is 8 bytes.
   * But the the of int pointer and size of double pointer are same in size.
   *
   * It also depends of system forexample if i run program in 32 bit system
   * then the size of pointer is 4 bytes because the memory address on
   * 32 bit system is 4 bytes.
   *
   * Calculation:
   *
   * Architecture: 32 bits
   * 1 byte -> 8 bits
   *
   * if 1 byte has 8 bits and our system has 32bits architecture. Find the size of memory address?
   *
   * Constrains: 1 byte == 8 bits
   *
   * -> 32 / 8 = 4
   * -> The size of memory address in 32 bits machine is 4 bytes.
   *
   * And if our system has 64bits then we follow the same steps to calculate the size
   * of memory address
   *
   * Calculation:
   *
   * Architecture: 64 bits
   * 1 byte -> 8 bits
   *
   * if 1 byte has 8 bits and our system has 64bits architecture. Find the size of memory address?
   *
   * Constrains: 1 byte == 8 bits
   *
   * -> 64 / 8 = 8
   * -> The size of memory address in 64 bits machine is 8 bytes.
   *
   * Let say we are on 64bit machine and why is that the size of int is 4 bytes
   * but the size of int pointer is 8 bytes.
   *
   * It's because on 64bit machine the each memory address size is 8 bytes
   *
   * sizeof(int)  -> 4bytes
   * sizeof(long) -> 8bytes
   *
   * int int_var = 100;
   * long long_var = 500;
   *
   * int_var = long_var;
   *
   * In this case the `truncation` will be in action
   *
   * When you assign a value of an 8-bytes datatype (e.g., double, long)
   * to a 4-bytes variable (e.g., int, float), the value may get truncated
   * because the 4-bytes varibale cannot hold the full precision or range
   * of the 8-byte value. The result in loss of data or precision
   *
   */

  std::cout << "sizeof(int): " << sizeof(int) << "bytes" << std::endl;
  std::cout << "sizeof(double): " << sizeof(double) << "bytes" << std::endl;
  std::cout << "sizeof(int*): " << sizeof(int *) << "bytes" << std::endl;
  std::cout << "sizeof(double*): " << sizeof(double *) << "bytes" << std::endl;
  std::cout << "sizeof(p_number): " << sizeof(p_number) << "bytes" << std::endl;
  std::cout << "sizeof(p_fractional_number): " << sizeof(p_fractional_number) << "bytes" << std::endl;

  std::cout << std::endl;
  std::cout << std::endl;

  // Initialize the pointer and assigning the data
  int int_var{44};
  int *p_int{&int_var};  // `&` is address of operator

  std::cout << "int_var: " << int_var << std::endl;
  std::cout << "p_int: " << p_int << std::endl;

  // We can also change a address stored in a pointer at anytime
  int int_var1{98};
  p_int = &int_var1;
  std::cout << "p_int: " << p_int << std::endl;

  // Dereferencing a pointer
  int linkedin_followers{1227};
  int *linkedin_followers_pointer{nullptr};
  linkedin_followers_pointer = &linkedin_followers;

  std::cout << "Reading data through pointer (followers): " << *linkedin_followers_pointer << std::endl;

  std::cout << std::endl;
  std::cout << std::endl;

  return 0;
}
