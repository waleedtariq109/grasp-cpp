#include <iostream>
#include <bitset>

int main()
{
  // Shift operators
  /**
   * Shift operators allow you to bits left or right
   *
   * 1 Byte -> 8 bits
   *
   *! Before Shifting the bits
   *
   *  7th 6th 5th 4th 3rd 2nd 1st 0th
   * ---------------------------------
   * | 0 | 1 | 0 | 1 | 1 | 1 | 1 | 0 |
   * ---------------------------------
   *
   *?  Binary to decimal conversion
   *?  0*2^7 + 1*2^6 + 0*2^5 + 1*2^4 + 1*2^3 + 1*2^2 + 1*2^1 + 0*2^0 = 94
   *
   *! After Shifting the bits
   *
   *  7th 6th 5th 4th 3rd 2nd 1st 0th
   * ---------------------------------
   * | 0 | 1 | 0 | 1 | 1 | 1 | 0 | 1 |
   * ---------------------------------
   *
   *?  Binary to decimal conversion
   *?  0*2^7 + 1*2^6 + 0*2^5 + 1*2^4 + 1*2^3 + 1*2^2 + 1*2^0 + 0*2^1 = 93
   *
   *
   * Binary -> Base-2: Which means on every bit we multiply
   * the value with 2 to the power of bit position on a dataset.
   */

  /**
   *
   * * GOLDEN HINT
   *
   * Shifting bit's to the right will divide your number by 2^n.
   * Sifting bit's to the left will multiply your number by 2^n.
   *
   *? NOTE: The `n` represent the number of bit's you have shift.
   *! NOTE: This rule breaks if you throw of 1's either to the right or to the left
   *
   */

  // Chapter1: The real journey starts from here

  unsigned short int value{0xff0u}; // Hex number

  std::cout << "Size of sort int in bytes: " << sizeof(value) << std::endl;
  std::cout << "Value(binary): " << std::bitset<16>(value) << std::endl;
  std::cout << "Value(decimal): " << value << std::endl;

  value = static_cast<unsigned short int>(value << 1);

  std::cout << "----------" << std::endl;

  std::cout << "Value(binary): " << std::bitset<16>(value) << std::endl;
  std::cout << "Value(decimal): " << value << std::endl;

  return 0;
}
