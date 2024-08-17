#include <iostream>
#include <iomanip>
#include <bitset>

int main()
{
  // Logical bitwise operator
  const int COLUMN_WIDTH{20};
  unsigned char value1{0x3}; // 0000 0011
  unsigned char value2{0x5}; // 0000 0101

  std::cout << "Value 1: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(value1) << std::endl;
  std::cout << "Value 2: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(value2) << std::endl;

  // Bitwise AND
  /**
   * The bitwise AND operator returns 1 only if the corresponding bits of both compared values are 1;
   * otherwise, it returns 0.
   */

  std::cout << std::endl; // New line
  std::cout << "Bitwise AND (&)" << std::endl;
  std::cout << "Value1 & Value2" << std::setw(COLUMN_WIDTH) << std::bitset<8>(value1 & value2) << std::endl;

  // Bitwise OR
  /**
   * The bitwise OR operator returns 1 if one of the corresponding bits of both compared values are 1;
   * otherwise, it returns 0.
   */

  std::cout << std::endl; // New line
  std::cout << "Bitwise OR (|)" << std::endl;
  std::cout << "Value1 & Value2" << std::setw(COLUMN_WIDTH) << std::bitset<8>(value1 | value2) << std::endl;

  // Bitwise NOT
  /**
   * The bitwise NOT negate/flips the every bit
   */

  std::cout << std::endl; // New line
  std::cout << "Bitwise NOT (~)" << std::endl;
  std::cout << "Value1: " << std::bitset<8>(value1) << std::setw(COLUMN_WIDTH) << std::bitset<8>(~value1) << std::endl;

  return 0;
}
