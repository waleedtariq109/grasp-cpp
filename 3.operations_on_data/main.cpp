#include <iostream>
#include <limits>

int main()
{
  // Number limits
  std::cout << "The range of short is from" << std::numeric_limits<short>::min() << " and the maximim range of short is " << std::numeric_limits<short>::max();
  return 0;
}
