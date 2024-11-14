#include <iostream>
#include <string_view>

#include "dog.h"

int main() {
  Dog dog1("Chop", "Shephered", 2);
  std::string_view name = dog1.getName();

  std::cout << "name: [getter] " << name << std::endl;

  dog1.printInfo();
}
