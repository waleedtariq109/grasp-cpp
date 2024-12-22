#include <iostream>

#include "person.h"

int main() {
  Person p1("Tariq", "Waleed", 23);
  Person p2("Javed", "Saqlain", 25);
  Person p3("Malik", "Talha", 32);

  /**
   * When ever we create a array of objects then for each object the copy constructor is called
   * by the compiler.
   *
   * If we are using this array in range based for loop then the copy constructor is called again.
   *
   * This means if we create an array of objects and we have 4 objects in array so the copy
   * constructor is called 4 times and right after if we use range based for loop then our
   * copy constructor called again for each iteration.
   *
   * So if we modify any of our object in loop then change won't reflect to our object because
   * we are modifying the copy not the actual object.
   *
   * If we want our changes to reflect we need to use reference in our range based loop or
   * we can also use normal for loop cuz normal for loop not create a copy.
   *
   * NOTE: Data modified in loops will also not reflect in real object instead it's reflect
   * on the array because in array the compiler create a copies of each of our object. So
   * to see the modified data we have to look into the array.
   *
   */

  // Copy constructor is called
  std::cout << "personsArray created" << std::endl;
  Person personsArray[]{p1, p2, p3, Person(p1)};

  // Copy constructor is called for each iteration
  std::cout << "Range based for loop" << std::endl;
  int age = 30;
  for (auto person : personsArray) {
    person.setAge(age);
  }

  /**
   * We change the age in range based for loop but change won't reflect to the personsArray objects
   * becuase we are modifying the copy which is destroyed when loop is finish.
   *
   * NOTE: When loop complete it's each iteration so the created copy is destroyed
   * and newly copy is created for next array element which in this case is object.
   *
   */

  /**
   * Pass by reference in range based loop
   */

  for (auto& person : personsArray) {
    person.setAge(age);
  }

  /**
   * In this example the age on each personsArray object is changed because we use reference
   * in loop
   */

  for (auto& person : personsArray) {
    std::cout << "age: " << *person.getAge() << std::endl;
  }

  /**
   * If we use noraml for loop then no copy constructor is called
   */

  std::cout << "Normal for loop" << std::endl;
  int age1 = 23;
  for (int i{0}; i < std::size(personsArray); ++i) {
    personsArray[i].setAge(age1);
  }

  for (int i{0}; i < std::size(personsArray); ++i) {
    std::cout << "age: " << *personsArray[i].getAge() << std::endl;
  }
}
