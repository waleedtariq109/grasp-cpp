#include <iostream>

int main() {
  // How we used pointer so far
  int number{22};  // Stored in stack memory
  int *p_number{&number};

  std::cout << std::endl;
  std::cout << "Declaring Pointer and Assigning Address" << std::endl;
  std::cout << "number: " << number << std::endl;
  std::cout << "&number: " << &number << std::endl;
  std::cout << "p_number: " << p_number << std::endl;
  std::cout << "*p_number: " << *p_number << std::endl;

  int *p_number1;  // Uninitialized pointer, contain junk address
  int number1{12};
  p_number1 = &number1;  // Make it point to valid address

  std::cout << std::endl;
  std::cout << "Uninitialized pointer" << std::endl;
  std::cout << "*p_number1: " << *p_number1 << std::endl;

  //! Bad Way

  /**
   * Writing through uninitialized pointer through dereferencing
   */
  /*
  int *p_number2;   // Pointing to invalid address
  *p_number2 = 55;  // Writing into invalid address

  std::cout << std::endl;
  std::cout << "Writing into uninitialized through dereferencing" << std::endl;
  std::cout << "p_number2: " << p_number2 << std::endl;
  std::cout << "*p_number2: " << *p_number2 << std::endl;
  */

  // Initialize a pointer to null
  /*
  int *p_number3{nullptr};
  *p_number3 = 99;

  std::cout << "*p_number3: " << *p_number3 << std::endl;
  */

  // Dynamic memory allocation
  /**
   * In this below code few things are happening.
   *
   * First we decalre a pointer and initialize it will null, which means it
   * point to invalid memory address equivalent to 0 and after that we dynamically
   * allocate a memory in p_number4 using new keyword.
   *
   * What new keyword does is basically allocate a enough memory which is enough
   * to store a MAX_INT and it allocate a memory on heap which is a dynamic
   * memory area and when it's done allocating the memory it returns the memory
   * address which is pointing to newly created memory.
   *
   * Once the memory on heap is allocated and it's address is being return
   * then our program owns this memory and no other application or even our
   * OS can use that memory until we release it.
   *
   * It's very important to release a memory once you operation is finished
   *
   */
  int *p_number4{nullptr};
  p_number4 = new int;
  *p_number4 = 77;  // Writing into dynamic allocated memory

  std::cout << std::endl;
  std::cout << "Dynamic memory allocation" << std::endl;
  std::cout << "*p_number4: " << *p_number4 << std::endl;

  /**
   *
   * When we our done we have to release the memory with the delete keyword
   * because unlike stack in heap we have manually release the memory
   *
   * What delete keyword does is deallocate the memory and make it
   * available for the other program and after release the memory
   * we have to re-initialize our pointer to nullptr and we have to do this
   * because pointer variable are stored in stack memory and it's pointed
   * to heap memory and when we released the heap memory out pointer is
   * still be able to point to that memory address so to avoid the
   * unexpected behaviour or to aviod program crash we have to set our
   * pointer to nullptr
   *
   */
  delete p_number4;
  p_number4 = nullptr;

  return 0;
}
