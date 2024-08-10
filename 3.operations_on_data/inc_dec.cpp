#include <iostream>

int main() {

  int value1 {5};
  value1 = value1 + 1;
  value1++;
  std::cout << value1 << std::endl;
  value1--;
  std::cout << value1 << std::endl;
  ++value1;
  std::cout << value1 << std::endl;
  --value1;
  std::cout << value1 << std::endl;

  return 0;
}
