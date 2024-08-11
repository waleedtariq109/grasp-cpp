#include <iostream>
#include <limits>

int main()
{
  // Number limits
  std::cout << "The range of short is from " << std::numeric_limits<short>::min() << " and the maximim range of short is " << std::numeric_limits<short>::max() << std::endl;
  std::cout << "The range of int is from " << std::numeric_limits<int>::min() << " and the maximim range of int is " << std::numeric_limits<int>::max() << std::endl;
  std::cout << "The range of long is from " << std::numeric_limits<long>::min() << " and the maximim range of long is " << std::numeric_limits<long>::max() << std::endl;
  std::cout << "The range of double is from " << std::numeric_limits<double>::min() << " and the maximim range of double is " << std::numeric_limits<double>::max() << std::endl;
  std::cout << "The range of float is from " << std::numeric_limits<float>::min() << " and the maximim range of float is " << std::numeric_limits<float>::max() << std::endl;
  return 0;
}
