#include <iostream>
#include <iomanip>
#include <bitset>

int main()
{
  // Bitwise Compound Assignment

  const int COLUMN_WIDTH{20};

  std::cout << std::endl;
  std::cout << "Compound bitwise assignment operators" << std::endl;

  unsigned char sandbox_var{0b00110100}; // 8 bits : positive numbers only

  // Print out initial value
  std::cout << std::endl;
  std::cout << "Initial value :  " << std::endl;
  std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : "
            << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
  std::cout << std::endl;

  // Compound left shift
  std::cout << std::endl;
  std::cout << "Shift left 2 bit positions in place :  " << std::endl;
  sandbox_var <<= 2;
  std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : "
            << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
  std::cout << std::endl;

  // Compound right shift
  std::cout << std::endl;
  std::cout << "Shift right 2 bit positions in place :  " << std::endl;
  sandbox_var >>= 2;
  std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : "
            << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
  std::cout << std::endl;
  return 0;
}
