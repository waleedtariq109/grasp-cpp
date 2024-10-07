#include <iostream>

int main() {
  /**
   * Verbose nullptr check is a way of checking weather the pointer
   * is nullptr before performing any operation.
   */

  int *verbosePtrCheck{nullptr};

  if (!(verbosePtrCheck == nullptr)) {
    std::cout << "verbosePtrCheck" << verbosePtrCheck << std::endl;
  } else {
    std::cout << "verbosePtrCheck pointer is point to INVALID memory address" << std::endl;
  }

  return 0;
}
