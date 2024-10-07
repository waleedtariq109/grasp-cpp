#include <iostream>

int main() {
  /**
   * In C++ there is very high chance for memory leaks becasue of it's
   * low level nature. When we allocate dynamic memory then do not
   * deallocate properly then it may cause a memory leak
   */

  int *somePointer{new int{67}};  // Allocating dynamic memory

  int number{21};
  // somePointer must deallocate here
  somePointer = &number;

  /**
   * Now the somePointer will point to number variable but the
   * value on dynamic memory is still there but we lost access
   * to that heap memory causing the memory leak
   */

  std::cout << "somePointer: " << *somePointer << std::endl;

  /**
   * Double Allocation
   *
   * If we allocate a dynamic memory and assign the address to a pointer
   * and we again allocate a dynamic memory and assign the address to the
   * same pointer then the previous allocated memory is still available in
   * heap but we no longer have access to that causing the memory leak
   *
   */

  int *allocation1{new int{76}};
  std::cout << *allocation1 << std::endl;

  // Should deallocate memory here

  allocation1 = new int(94);
  std::cout << *allocation1 << std::endl;

  delete allocation1;
  allocation1 = nullptr;
  /**
   * This delete statement will release the memory for the most
   * recently allocated memory. The memory allocated initially
   * is still present in the heap and is not freed.
   */

  return 0;
}
