#include <iostream>

int main() {
  /**
   * In C++ there is very high chance for memory leaks becasue of it's
   * low level nature. When we allocate dynamic memory then do not
   * deallocate properly then it may cause a memory leak
   */

  int *somePointer{new int{67}};  // Allocating dynamic memory

  int number{21};
  somePointer = &number;

  /**
   * Now the somePointer will point to number variable but the
   * value on dynamic memory is still there but we lost access
   * to that heap memory causing the memory leak
   */

  std::cout << "somePointer: " << *somePointer << std::endl;

  return 0;
}
