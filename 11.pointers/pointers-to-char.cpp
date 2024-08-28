#include <iostream>

int main() {
  // Pointers to char
  char* p_char_var{nullptr};
  char char_var{'A'};
  p_char_var = &char_var;

  std::cout << *p_char_var << std::endl;

  return 0;
}
