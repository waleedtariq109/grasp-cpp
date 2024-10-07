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
   * to some value or initialize this pointer with nullptr and if you are
   * trying to dereferecning the pointer then make sure it point to valid
   * memory address otherwise the program will crash or terminate.
   *
   * NOTE:
   * This is not a dangling pointer; this is just a case we might
   * encounter if we leave our pointer uninitialized and if we
   * initialized the pointer to nullptr and try to dereferencing it
   * then it will also crash the program.
   *
   */

  // Case #1: Uninitialized pointer
  int *uninitializedPointer;
  std::cout << "Case #1: Uninitialized pointer" << std::endl;
  std::cout << "uninitializedPointer: " << uninitializedPointer << std::endl;
  // std::cout << "*uninitializedPointer: " << *uninitializedPointer << std::endl;  // MIGHT CRASH

  std::cout << std::endl;

  int *uninitializedPointer1{nullptr};
  std::cout << "Case #1: Uninitialized pointer" << std::endl;
  std::cout << "uninitializedPointer1: " << uninitializedPointer1 << std::endl;
  // std::cout << "*uninitializedPointer1: " << *uninitializedPointer1 << std::endl;  // CRASH
  std::cout << std::endl;

  /**
   * *SOLUTION
   */

  int number{55};
  int *uninitializedPointer2{&number};
  std::cout << "Case #1: Uninitialized pointer" << std::endl;
  std::cout << "uninitializedPointer1: " << uninitializedPointer2 << std::endl;
  std::cout << "*uninitializedPointer1: " << *uninitializedPointer2 << std::endl;
  std::cout << std::endl;

  /**
   *
   * Case #2: Deleted Pointer
   *
   * In this case when we allocate the memory on heap with the new keyword
   * then we have to manually deallocate the memory once we deallocate the
   * memory then our still points to the address and if we don't reinitialize
   * the to the nullptr then our program might be crash or may lead to
   * undefined behaviour.
   *
   * SOLUTION:
   * When we release the memory and return to the system then we have to
   * reinitialized our to the nullptr or some valid memory address because
   * if we don't then our pointer is still pointing to that address on heap
   * memory and to avoid this we have to reinitialized our piointer
   *
   */

  std::cout << "Case #2: Deleted Pointer" << std::endl;
  int *deletedPointer{new int{67}};

  std::cout << "*deletedPointer - Before Deleted: " << *deletedPointer << std::endl;
  delete deletedPointer;
  std::cout << "*deletedPointer - After Deleted: " << *deletedPointer << std::endl;  // Still point on heap

  /**
   *
   * * SOLUTION
   */

  int *deletedPointer1{new int{88}};
  std::cout << "*deletedPointer1 - Before Deleted: " << *deletedPointer1 << std::endl;
  delete deletedPointer1;
  deletedPointer1 = nullptr;
  // std::cout << "*deletedPointer1 - After Deleted: " << *deletedPointer1 << std::endl;  // Program will crash
  /**
   * The reason program will might crash because we are trying to dereferenicng
   * the nullptr
   */

  return 0;
}
