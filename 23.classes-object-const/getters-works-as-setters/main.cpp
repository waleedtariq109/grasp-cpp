#include <iostream>

#include "dog.h"

int main() {
  std::cout << std::endl;

  Dog dog1("Chop", "Shephered", 2);
  dog1.printInfo();

  std::cout << "age: " << dog1.Age() << std::endl;

  dog1.Age() = 5;
  std::cout << "age: " << dog1.Age() << std::endl;

  std::string& name = dog1.Name();
  std::cout << "name: " << name << std::endl;
  name = "Dog";

  dog1.printInfo();

  std::cout << std::endl;
}
