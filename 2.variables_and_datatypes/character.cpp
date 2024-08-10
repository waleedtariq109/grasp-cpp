#include <iostream>

int main() {
  // Character and Text

  char char1 {'A'};
  char char2 {'R'};
  char char3 {'R'};
  char char4 {'O'};
  char char5 {'W'};

  std::cout << char1 << char2 << char3 << char4 << char5 << std::endl;

  // Size of char 1 byte -> 8 bits -> 2*8 = 256 (0 ~ 256)
  char sizeofchar = 87;
  
  std::cout << "The size of char: " << sizeof(sizeofchar) << std::endl;
  std::cout << sizeofchar << std::endl;

  std::cout << static_cast<int>(char5) << std::endl;

  return 0;
}