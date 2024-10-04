#include <iostream>

int main() {
  int scores[10]{11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

  // Array index notation
  /*
    int *pointer1{&scores[0]};
    int *pointer2{&scores[8]};
  */

  // Pointer Arithmetic notation
  int *pointer1{scores + 0};
  int *pointer2{scores + 8};

  std::cout << "pointer2 - pointer1: " << pointer2 - pointer1 << std::endl;
  std::cout << "pointer1 - pointer2: " << pointer1 - pointer2 << std::endl;

  std::ptrdiff_t positive_difference{pointer2 - pointer1};
  std::ptrdiff_t negative_difference{pointer1 - pointer2};

  std::cout << "positive_difference: " << positive_difference << std::endl;
  std::cout << "negative_difference: " << negative_difference << std::endl;
  std::cout << "sizeof(std::ptrdiff_t): " << sizeof(std::ptrdiff_t) << std::endl;

  return 0;
}
