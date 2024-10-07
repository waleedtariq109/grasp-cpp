#include <iostream>

int main() {
  // How we have used pointers so far
  int number{22};  // Stored in stack memory
  int *p_number{&number};

  std::cout << std::endl;
  std::cout << "Declaring a Pointer and Assigning an Address" << std::endl;
  std::cout << "number: " << number << std::endl;
  std::cout << "&number: " << &number << std::endl;
  std::cout << "p_number: " << p_number << std::endl;
  std::cout << "*p_number: " << *p_number << std::endl;

  int *p_number1;  // Uninitialized pointer, contains a junk address
  int number1{12};
  p_number1 = &number1;  // Make it point to a valid address

  std::cout << std::endl;
  std::cout << "Uninitialized pointer" << std::endl;
  std::cout << "*p_number1: " << *p_number1 << std::endl;

  //! Bad Practice

  /**
   * Writing through an uninitialized pointer via dereferencing
   */
  /*
  int *p_number2;   // Pointing to an invalid address
  *p_number2 = 55;  // Writing into an invalid address

  std::cout << std::endl;
  std::cout << "Writing into an uninitialized pointer via dereferencing" << std::endl;
  std::cout << "p_number2: " << p_number2 << std::endl;
  std::cout << "*p_number2: " << *p_number2 << std::endl;
  */

  // Initialize a pointer to nullptr
  /*
  int *p_number3{nullptr};
  *p_number3 = 99;  // Writing into a null pointer

  std::cout << "*p_number3: " << *p_number3 << std::endl;
  */

  // Dynamic memory allocation
  /**
   * In the following code, several things are happening:
   *
   * First, we declare a pointer and initialize it to null, which means it
   * points to an invalid memory address equivalent to 0. After that, we dynamically
   * allocate memory to `p_number4` using the `new` keyword.
   *
   * The `new` keyword allocates enough memory to store an `int` on the heap,
   * which is a dynamic memory area. Once the memory is allocated, it returns
   * the address of the newly created memory.
   *
   * After memory on the heap is allocated and its address is returned,
   * our program owns that memory, and no other application or even the
   * operating system can use it until we release it.
   *
   * It's very important to release the memory once you're done with it.
   *
   */
  int *p_number4{nullptr};
  p_number4 = new int;
  *p_number4 = 77;  // Writing into dynamically allocated memory

  std::cout << std::endl;
  std::cout << "Dynamic memory allocation" << std::endl;
  std::cout << "*p_number4: " << *p_number4 << std::endl;

  /**
   * When we are done, we must release the memory using the `delete` keyword,
   * because, unlike stack memory, heap memory must be manually released.
   *
   * The `delete` keyword deallocates the memory and makes it available
   * for other programs. After releasing the memory, we should re-initialize
   * our pointer to `nullptr`. This is necessary because pointers are
   * stored in stack memory and point to heap memory. Once the heap memory
   * is released, the pointer may still hold the old memory address, which
   * could lead to unexpected behavior or crashes. To prevent this,
   * the pointer should be set to `nullptr`.
   *
   */
  delete p_number4;
  p_number4 = nullptr;

  std::cout << std::endl;

  /**
   * It's also possible to initialize a pointer with a valid address
   * upon declaration.
   */

  int *p_number5{new int};      // Contains a junk address
  int *p_number6{new int(22)};  // Direct initialization
  int *p_number7{new int{23}};  // Uniform initialization

  std::cout << "Initialized with a valid memory address upon declaration" << std::endl;

  std::cout << "p_number5: " << p_number5 << std::endl;
  std::cout << "*p_number5: " << *p_number5 << std::endl;  // Junk value

  std::cout << "p_number6: " << p_number6 << std::endl;
  std::cout << "*p_number6: " << *p_number6 << std::endl;

  std::cout << "p_number7: " << p_number7 << std::endl;
  std::cout << "*p_number7: " << *p_number7 << std::endl;

  // Releasing the memory
  delete p_number5;
  delete p_number6;
  delete p_number7;

  p_number5 = nullptr;
  p_number6 = nullptr;
  p_number7 = nullptr;

  std::cout << std::endl;

  /**
   * We can reuse the pointer even after releasing the memory,
   * because we release the memory it points to, but the pointer variable
   * itself is still available for use.
   */

  p_number7 = new int(81);
  std::cout << std::endl;
  std::cout << *p_number7 << std::endl;
  delete p_number7;
  p_number7 = nullptr;

  // Avoid deleting the pointer twice
  int *pointer = new int(76);
  std::cout << *pointer << std::endl;

  delete pointer;
  pointer = nullptr;
  delete pointer;  // This is safe since the pointer is already set to nullptr

  std::cout << "END" << std::endl;

  return 0;
}
