#include <iostream>

int main()
{
  // Overflow and Underflow

  unsigned char data{253};

  ++data;
  std::cout << "The data is: " << static_cast<int>(data) << std::endl;

  ++data;
  std::cout << "The data is: " << static_cast<int>(data) << std::endl; // Max limit reach of char

  // The data will start overflowing from here
  ++data;
  std::cout << "The data is: " << static_cast<int>(data) << std::endl;

  ++data;
  std::cout << "The data is: " << static_cast<int>(data) << std::endl;

  // Underflow

  std::cout << "------Underflow------" << std::endl;

  unsigned char data1{2};

  --data1;
  std::cout << "The data1 is: " << static_cast<int>(data1) << std::endl;

  --data1;
  std::cout << "The data1 is: " << static_cast<int>(data1) << std::endl; // Min limit reach here

  // The data will start underflowing from here

  --data1;
  std::cout << "The data1 is: " << static_cast<int>(data1) << std::endl;

  --data1;
  std::cout << "The data1 is: " << static_cast<int>(data1) << std::endl;

  return 0;
}
