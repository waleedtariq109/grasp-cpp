#include <iostream>

/*
  There is only one difference in struct and class which is
  the members of struct are public by default and on the other
  hand the members of class are private by default.

  However we can change this behaviour using public or private
  modifiers in both struct and class.
*/

class Dog {
  std::string name;  // Private by default
};

struct Cat {
  std::string name;  // Public by default
};

int main() {
  Dog dog;
  Cat cat;

  // dog.name = "Chop"; // Compiler error
  cat.name = "Kinzee";  // Works fine

  std::cout << "cat name: " << cat.name << std::endl;
}
