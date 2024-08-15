#include <iostream>
#include <bitset>

int main()
{
  // Printing intergers in binary

  unsigned int short data{0b111111110};

  std::cout << "Data(dec): " << std::dec << data << std::endl;
  std::cout << "Data(hex): " << std::showbase << std::hex << data << std::endl;
  std::cout << "Data(bin): " << std::bitset<16>(data) << std::endl;

  return 0;
}
