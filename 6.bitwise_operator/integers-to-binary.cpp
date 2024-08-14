#include <iostream>
#include <bitset>

int main()
{
  // Bitwise operator

  unsigned short int data{15};

  std::cout << "Data(decimal): " << std::showbase << std::dec << data << std::endl;
  std::cout << "Data(Octal): " << std::showbase << std::oct << data << std::endl;
  std::cout << "Data(Hexadecimal): " << std::showbase << std::hex << data << std::endl;
  std::cout << "Data(Binary): " << std::bitset<16>(data) << std::endl;

  return 0;
}
