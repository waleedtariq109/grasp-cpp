#include <iostream>

int main() {
  // Declare and initialize a pointer
  /**
   * The pointer is special type of variable which stores the memory address
   * of other variable.
   *
   * Few things keep in mind like if we create a pointer it's better to initialize it,
   * with implicitly or explicitly.
   *
   * If we use braced initialization then the compiler will automatially initialize implicitly
   * but we can also initialize explicitly by assigning `nullptr`
   */

  // Declare and initialize pointer

  /**
   * In this example, we use brace initialization. If we don't explicitly assign a value,
   * the pointers are automatically initialized to nullptr by the compiler.
   * Ensuring they don't point to any random or invalid memory address.
   */
  int* p_number{};                // Implicitly Initialized to nullptr
  double* p_fractional_number{};  // Implicitly Initialized to nullptr

  int* p_number1{nullptr};             // Explicitly Initialized to nullptr
  int* p_fractional_number1{nullptr};  // Explicitly Initialized to nullptr

  // Size of different types of pointers
  std::cout << "sizeof(int): " << sizeof(int) << std::endl;                                    // 4 bytes
  std::cout << "sizeof(double): " << sizeof(double) << std::endl;                              // 8 bytes
  std::cout << "sizeof(int*): " << sizeof(int*) << std::endl;                                  // 8 bytes
  std::cout << "sizeof(double*): " << sizeof(double*) << std::endl;                            // 8 bytes
  std::cout << "sizeof(p_number1): " << sizeof(p_number1) << std::endl;                        // 8 bytes
  std::cout << "sizeof(p_fractional_number1): " << sizeof(p_fractional_number1) << std::endl;  // 8 bytes

  /**
   * The size of int is 4 bytes but the size of int ptr is 8 bytes why is that?
   * The size of pointer is dependant on the architecture of the system due to
   * architecture's addressing capability rather then the data type they point to.
   *
   * To understand this we have to understand first what 32bit or 64bit architecture means.
   * This is very simple the 64bit architecture means that your system is using 64bit-addresses
   * which is 8 bytes and pointer is used to store the memory address of something they point to
   * since the memory address is 64bits in size that is why the int* is returns 8 bytes because
   * the int* stores the memory address not the value.
   *
   */

  //----------------------------

  // It doesn't matter of you add * close to the data type or closed to the variable name

  /**
   * If you define a pointer and also declare a new varibale on same line with `,` operator
   * the other variable is become a pointer.
   */

  std::cout << std::endl;

  /**
   * Altough you can do that but this will cause confusion
   * if junior developer looking at your code they might be thinking
   * that p_number2 and other_var both are pointers
   */
  int *p_number2{nullptr}, other_var{};
  std::cout << "sizeof(p_number2): " << sizeof(p_number2) << std::endl;  // 8 bytes
  std::cout << "sizeof(other_var): " << sizeof(other_var) << std::endl;  // 4 bytes

  // Better way is to seperate these declaration on different lines
  int* p_number3{nullptr};
  int other_var1{};

  std::cout << std::endl;

  // Declare a variable along with pointer variable and pont the pointer to that variable
  int int_var{34};
  int* p_int{&int_var};  // The `&` is address-of operator

  std::cout << "int_var: " << int_var << std::endl;
  std::cout << "p_int(address of int_var): " << p_int << std::endl;

  std::cout << std::endl;

  // You can also change the address in a pointer
  int int_var1{88};
  p_int = &int_var1;  // Assign a different address to the pointer
  std::cout << "p_int(address of int_var): " << p_int << std::endl;

  std::cout << std::endl;

  // We cannot cross assign between pointers of different types
  int* p_int1{nullptr};
  double double_var{33.45};

  // p_int1 = &double_var; // This will give compiler error

  std::cout << std::endl;

  // Dereferencing a pointer
  /**
   * Dereferencing a pointer means reads the data which is stored in that memory address
   */
  int* p_int2{nullptr};
  int int_data{77};
  p_int2 = &int_data;

  std::cout << "Reading ptr data: " << *p_int2 << std::endl;

  return 0;
}
