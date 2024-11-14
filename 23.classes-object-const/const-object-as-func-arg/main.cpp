#include <iostream>
#include <string_view>

#include "dog.h"

/**
 * Here in this function we are getting our const object as a non-const
 * value so compiler won't complain becuase we are basically passing
 * a non-const copy of our const object
 */
void passConstObjectByValue(Dog dog) {
  dog.setName("Rocky");
  dog.printInfo();
}

/**
 * In this function, we can't pass a const object by reference
 * because we are receiving a non-const reference, which means
 * there is no restriction on modifying the value of the received reference.
 *
 * However, if we look closely, we are actually passing a const object,
 * but in passByNonConstReference, we are receiving a non-const reference.
 * This is why the compiler will not compile this code, as there is no
 * restriction on modifying the passed object.
 */

void passByNonConstReference(Dog& dog) {
  // If we pass a const ref, code will not compiler
}

int main() {
  std::cout << std::endl;

  const Dog dog1("Chop", "Shephered", 2);

  passConstObjectByValue(dog1);  // pass-by-value

  std::cout << std::endl;

  // passByNonConstReference(dog1);  // Compiler error

  std::cout << std::endl;
}
