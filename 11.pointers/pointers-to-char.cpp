#include <iostream>

int main() {
  // Pointers to char
  char* letter_ptr{nullptr};
  char letter{'A'};

  letter_ptr = &letter;

  std::cout << letter_ptr << std::endl;

  return 0;
}
