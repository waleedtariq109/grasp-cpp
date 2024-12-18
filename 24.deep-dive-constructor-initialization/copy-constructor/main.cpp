#include <iostream>

#include "person.h"

int main() {
  Person p1("Tariq", "Waleed", 23);
  p1.printInfo();
  
  int age = 24;

  std::cout << std::endl;

  // Create a person copy
  Person p2(p1);
  p2.printInfo();
  p1.setAge(age);

  std::cout << std::endl;

  p1.printInfo();
  
  std::cout << std::endl;
  
  p2.printInfo();

  std::cout << std::endl;

  std::cout << "Programs end" << std::endl;

}
