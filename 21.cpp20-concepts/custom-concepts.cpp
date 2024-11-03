#include <iostream>
#include <type_traits>
#include <concepts>

/**
 * In C++20, we can define our own concepts.
 * We can use the built-in concepts, or we can define our own.
 * 
 * To define a concept, we use the concept keyword. 
 * We then specify the requirements that the type must meet.
 * 
 * We can then use this concept in our templates. 
 * We can use the requires keyword, or we can use the concept name directly. 
 * 
 * We can also use concepts to constrain function parameters.
 * 
 * Below is an example of a custom concept.
 */

template <typename T>
concept Integral = std::is_integral<T>::value;

// Syntax 1
template <typename T>
requires Integral<T>
T add1(T a, T b) {
  return a + b;
}

// Syntax 2
template <Integral T>
T add2(T a, T b) {
  return a + b;
}

int main() {
  int intVar1 = 1;
  int intVar2 = 2;
  std::cout << add1(intVar1, intVar2) << std::endl;

  int intVar3 = 3;
  int intVar4 = 4;

  std::cout << add2(intVar3, intVar4) << std::endl;
  return 0;
}
