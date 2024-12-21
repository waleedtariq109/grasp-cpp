#include <iostream>

#include "person.h"

int main() {
  Person p1("Tariq", "Waleed", 23);
  Person p2(p1);

  int age = 24;

  p1.setAge(age);

  std::cout << "p1 info" << std::endl;
  p1.printInfo();
  std::cout << std::endl;

  std::cout << "p2 info" << std::endl;
  p2.printInfo();
  std::cout << std::endl;

  /**
   * Since we implemented the copy constructor, changing the age pointer in p1
   * won't affect the data in p2.
   */
}
