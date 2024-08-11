#include <iostream>

int main()
{
  // Weird integral types

  short int var1{20};
  short int var2{30};

  char var3{40};
  char var4{50};

  std::cout << "The size of short int var1 is: " << sizeof(var1) << " bytes" << std::endl;
  std::cout << "The size of short int var2 is: " << sizeof(var2) << " bytes" << std::endl;
  std::cout << "The size of char var3 is: " << sizeof(var3) << " bytes" << std::endl;
  std::cout << "The size of char var4 is: " << sizeof(var4) << " bytes" << std::endl;

  auto result_1{var1 + var2};
  auto result_2{var3 + var4};

  std::cout << "The size of result1: " << sizeof(result_1) << std::endl;
  std::cout << "The size of result2: " << sizeof(result_2) << std::endl;

  return 0;
}
