#include <iostream>
#include <string_view>

#include "dog.h"

int main() {
  std::cout << std::endl;

  /**
   * If we have a const object suerly we cannot modify the value of
   * any of its member but what we want is basically read the value.
   *
   * And for that we have to make our setter as an const member function
   * when we make any function inside class a const member function then
   * compiler will know we are not modifying anything and if we do then
   * we will get compiler error
   */

  const Dog dog1("Chop", "Shephered", 2);

  // dog1.setAge(8); // Compiler error because we are trying to modifying the value

  /**
   * If we just call the getter then it will works fine because all the
   * getters are const member function
   */

  std::string_view name = dog1.getName();
  std::string_view breed = dog1.getBreed();
  unsigned int age = dog1.getAge();

  std::cout << "name: " << name << std::endl;
  std::cout << "breed: " << breed << std::endl;
  std::cout << "age: " << age << std::endl;

  std::cout << std::endl;

  dog1.printInfo();

  std::cout << std::endl;
}
