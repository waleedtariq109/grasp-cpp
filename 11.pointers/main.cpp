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

  /**
   * The reason program will might crash because we are trying to dereferenicng
   * the nullptr
   */

  int *deletedPointer1{new int{88}};
  std::cout << "*deletedPointer1 - Before Deleted: " << *deletedPointer1 << std::endl;
  delete deletedPointer1;
  deletedPointer1 = nullptr;
  // std::cout << "*deletedPointer1 - After Deleted: " << *deletedPointer1 << std::endl;  // Program will crash
  std::cout << std::endl;

  /**
   *
   * Case #3: Multiple pointers pointing to the same address
   *
   * In this case let's say we have two pointer pointed to the same address
   * So we have to set owner first and by owner i mean a master pointer and
   * if master pointer is deallocated the memory then the other slave pointer
   * should deallocate the memory because all the slave pointer will point to
   * the master pointer and if master pointer deallocates the memory then the
   * all the other salve pointer will would become a dangling pointer becasue
   * in dynamic memory allocation once we occupy the memory we have to release
   * it to as well and since the master pointer deallocate the memory this doesn't mean
   * all the slave pointer will also deallocate the memory because all the slave pointer
   * will point to the same address as masterPointer but not point to the masterPointer
   * that's why once we deallocate the masterPointer we have to deallocate the other
   * slaves pointer too.
   *
   * SOLUTION:
   * When we deallocate the masterPointer we have to deallocate the all the
   * slaves pointer too manually and we also have to add a check like if our
   * masterPointer not point to the nullptr then we perform operation on slave
   * pointer and same goes for the master pointer too.
   *
   */

  int *masterPointer{new int{83}};   // Master pointer
  int *slavePointer{masterPointer};  // Slave pointer

  std::cout << "masterPointer: " << masterPointer << ", *masterPointer: " << *masterPointer << std::endl;
  std::cout << "slavePointer: " << slavePointer << ", *slavePointer: " << *slavePointer << std::endl;

  // Deleting master pointer
  delete masterPointer;
  std::cout << "After deleting the master pointer" << std::endl;

  std::cout << "slavePointer: " << slavePointer << ", *slavePointer: " << *slavePointer << std::endl;

  std::cout << std::endl;

  return 0;
}
