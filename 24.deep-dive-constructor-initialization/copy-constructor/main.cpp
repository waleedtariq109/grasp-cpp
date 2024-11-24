#include <iostream>

#include "person.h"

int main() {
  Person person("Tariq", "Waleed", 23);
  std::cout << "person age: " << *person.getAge() << std::endl;
}
