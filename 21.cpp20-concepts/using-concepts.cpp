#include <iostream>
#include <type_traits>

/**
 * Before C++20 concepts we are using type traits to check if a type satisfies a concept
 * 
 * Below is an example of a type trait that checks if a type is a pointer
 */

template <typename T>
T add(T a, T b) {
  static_assert(std::is_integral<T>::value, "Integral type required");
  return a + b;
}

int main() {
  std::cout << add(1, 2) << std::endl; // Works
  //std::cout << add(1.0, 2.0) << std::endl; // Compile time error
}
