#include <iostream>

int main() {
  /**
   * Verbose nullptr check is a way of checking weather the pointer
   * is nullptr before performing any operation.
   */

  int *verbosePtrCheck{nullptr};
  verbosePtrCheck = new int(99);

  if (!(verbosePtrCheck == nullptr)) {
    std::cout << "verbosePtrCheck: " << verbosePtrCheck << std::endl;
    std::cout << "*verbosePtrCheck: " << *verbosePtrCheck << std::endl;
  } else {
    std::cout << "verbosePtrCheck pointer is point to INVALID memory address" << std::endl;
  }

  delete verbosePtrCheck;
  verbosePtrCheck = nullptr;

  /**
   * Verbose nullptr check is a way of checking weather the pointer
   * is nullptr before performing any operation with one key difference
   * if we compare this with verbose check.
   *
   * In compact check we don't compare our pointer with nullptr instead
   * we just write a name of our pointer in if statement as it is a boolean
   * value. At runtime if there is pointer name in if condition then it's
   * implicitly evaluated as boolean.
   *
   * Non-null pointer will evaluates to `true`
   * null pointer will evaluates to `false`
   *
   */

  int *compactPtrCheck{nullptr};

  if (compactPtrCheck) {
    std::cout << "compactPtrCheck: " << compactPtrCheck << std::endl;
  } else {
    std::cerr << "[ERROR]: Invalid memory address" << std::endl;
  }

  /**
   *
   * It is considered as a best practice like check the pointer
   * before deleting it to garauntee maximum saftey
   *
   */

  if (compactPtrCheck) {
    delete compactPtrCheck;
    compactPtrCheck = nullptr;
  }

  return 0;
}
