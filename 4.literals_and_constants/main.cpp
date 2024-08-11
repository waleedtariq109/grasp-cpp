#include <iostream>

constexpr int add(int val1, int val2)
{
  return val1 + val2;
}

int main()
{
  // Constans Expressions

  constexpr int SOME_LIB_MAJOR_VERSION{123};
  constexpr int EYE_COUNT{2};
  constexpr double PI{3.14};

  std::cout << "Eye count: " << EYE_COUNT << std::endl;
  std::cout << "Pi value: " << PI << std::endl;

  // You cannot assign runtime value to constexpr

  constexpr int leg_count{2}; // -> In Action at runtime
  constexpr int arm_count{leg_count};

  static_assert(SOME_LIB_MAJOR_VERSION == 123);

  std::cout << "Everything is done" << std::endl;

  // Example 1
  int a, b;
  std::cin >> a >> b;
  std::cout << add(a, b) << std::endl;

  // Example 2
  std::cout << add(2, 3) << std::endl;

  return 0;
}
