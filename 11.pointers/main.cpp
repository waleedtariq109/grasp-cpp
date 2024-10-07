#include <iostream>

int main() {
  // Dangling pointer

  /**
   *
   * Case #1: Uninitialized pointer
   *
   * In this case we have a pointer which we decalre but not initialized
   * so this pointer is point to some garbage value or invalid memory
   * address. If we don't initialize our pointer there are chances that
   * our program might crash and show undefined behaviour.
   *
   * SOLUTION:
   * The solution to this is we alway initialize our pointer and point it
   * to some value or initialize this pointer with nullptr.
   *
   * NOTE:
   * This is not a dangling pointer; this is just a case we might
   * encounter if we leave our pointer uninitialized.
   *
   */

  // Case #1: Uninitialized pointer
  int *uninitializedPointer;
  std::cout << "Case #1: Uninitialized pointer" << std::endl;
  std::cout << "uninitializedPointer: " << uninitializedPointer << std::endl;
  std::cout << "*uninitializedPointer: " << *uninitializedPointer << std::endl;  // MIGHT CRASH

  return 0;
}
