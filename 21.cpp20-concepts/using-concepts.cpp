#include <iostream>
#include <type_traits>
#include <concepts>

/**
 * Before C++20 concepts we are using type traits to check if a type satisfies a concept
 * 
 * Below is an example of a type trait that checks if a type is a pointer
 */

template <typename T>
T addInteger(T a, T b) {
  static_assert(std::is_integral<T>::value, "Integral type required");
  return a + b;
}

/*
 * With C++20 concepts we can use concepts to check if a type satisfies a concept
 * There are built in concepts like integral, floating point, signed, unsigned, etc
 * We can also define our own concepts
 */

// Syntax #1
template <typename T>
requires std::integral<T>
T add(T a, T b) {
  return a + b;
}

// Syntax #2
template <std::integral T>
T addIntegers(T a, T b) {
  return a + b;
}

// Syntax #3
template <typename T>
T addIntegers2(T a, T b) requires std::integral<T> {
  return a + b;
}

int main() {
  std::cout << addInteger(1, 2) << std::endl; // Works
  //std::cout << addInteger(1.0, 2.0) << std::endl; // Compile time error

  int intVar1 = 1;
  int intVar2 = 2;
  std::cout << add(intVar1, intVar2) << std::endl; // Works
  //std::cout << add(1.0, 2.0) << std::endl; // Compile time error

  int intVar3 = 3;
  int intVar4 = 4;
  std::cout << addIntegers(intVar3, intVar4) << std::endl; // Works
  //std::cout << addIntegers(1.0, 2.0) << std::endl; // Compile time error

  int intVar5 = 5;
  int intVar6 = 6;
  std::cout << addIntegers2(intVar5, intVar6) << std::endl; // Works
  //std::cout << addIntegers2(1.0, 2.0) << std::endl; // Compile time error

  /**
   * The reason we will get a compile time error with the floating point example is because
   * the add function is expecting an integral type but we are passing a floating point type
   * and without we have add the runtime checks.
   * 
   * Basically, concepts are a compile time check and are more type safe than type traits
   */
}
