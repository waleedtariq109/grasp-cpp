#include <iostream>

int main() {
  int a{20};
  int *p{nullptr};
  p = &a;

  std::cout << p << std::endl;

  return 0;
}
