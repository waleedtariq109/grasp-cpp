#include <iostream>
#include <bitset>

int main()
{
  // Bitwise Operator

  /**
   * If we move left a bit then our number will be multiply by 2^n
   * If we move right a bit then our number will be divide by 2^n
   *
   * ? Note: The n represent the number of bits we move
   */
  unsigned short int value{0xff0u};

  std::cout << "The size of short int: " << sizeof(short int) << std::endl;
  std::cout << "Value: " << std::bitset<16>(value) << " , dec " << value << std::endl;

  // Shift left by 1 bit
  value = static_cast<unsigned short int>(value << 1);
  std::cout << "Value: " << std::bitset<16>(value) << " , dec " << value << std::endl;

  // Shift left by 1 bit
  value = static_cast<unsigned short int>(value << 1);
  std::cout << "Value: " << std::bitset<16>(value) << " , dec " << value << std::endl;

  // Shift left by 1 bit
  value = static_cast<unsigned short int>(value << 1);
  std::cout << "Value: " << std::bitset<16>(value) << " , dec " << value << std::endl;

  // Shift left by 1 bit, Here we are hitting the end and if we shift bit one more time to the left
  // then we start losing the value
  value = static_cast<unsigned short int>(value << 1);
  std::cout << "Value: " << std::bitset<16>(value) << " , dec " << value << std::endl;

  // Start losing value
  value = static_cast<unsigned short int>(value << 1);
  std::cout << "Value: " << std::bitset<16>(value) << " , dec " << value << std::endl;

  // Shift the bit to right
  // This will not recover the lost data instead it will pad the 0 at the start and
  // divide our number by 2^n

  value = static_cast<unsigned short int>(value >> 1);
  std::cout << "Value: " << std::bitset<16>(value) << " , dec " << value << std::endl;

  // Right shift by multiple bits in one go
  // Shift by 4 bits

  // This will divide the number by 2^4 = 16, which means number/16
  value = static_cast<unsigned short int>(value >> 4);
  std::cout << "Value: " << std::bitset<16>(value) << " , dec " << value << std::endl;

  return 0;
}
