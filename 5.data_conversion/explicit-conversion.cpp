#include <iostream>

int main()
{
  // Explicit conversion
  double x{12.5};
  double y{34.6};

  int sum = x + y;

  std::cout << "The sum is: " << sum << std::endl;

  sum = static_cast<int>(x) + static_cast<int>(y);

  std::cout << "The sum is: " << sum << std::endl;

  sum = static_cast<int>(x + y);

  std::cout << "The sum is: " << sum << std::endl;

  // Old style C-Cast

  double PI{3.14};
  int int_pi = (int)(PI);

  std::cout << "PI: " << PI << std::endl;
  std::cout << "int pi: " << int_pi << std::endl;

  return 0;
}
