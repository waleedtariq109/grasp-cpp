#include <iostream>

#include "square.h"

bool compare(const Square& sq1, const Square& sq2) {
  return sq1.Surface() > sq2.Surface() ? true : false;
}

int main() {
  Square square1(88.7);
  Square square2(87.98);

  std::cout << std::boolalpha;
  std::cout << "square1 > square2: " << compare(square1, square2);

  std::cout << std::endl;
  std::cout << "Implicit conversion" << std::endl;
  std::cout << "square1 > 55.98: " << "compare(square1, 55.98): Compiler error" << std::endl;

  std::cout << std::endl;
  std::cout << "Explicit conversion" << std::endl;
  std::cout << "square1 > 55.98: " << compare(square1, Square(55.98)) << std::endl;
  /**
   * In this example the 55.98 will implicitly converts into Square object
   * like this Square(55.98);
   *
   * To avoid this we have to make our constructor explicit so that compiler
   * will avoid implicit conversion and just need to add the explicit keyword
   * before the constructor
   */
}
