#include "person.h"

#include <iostream>

Person::Person(std::string lastName, std::string firstName, int age) {}

Person::Person(std::string lastName, std::string firstName) {}

Person::Person(std::string lastName) {}

void Person::printPersonInfo() {
  std::cout << "Person object at " << this << " [lastName: " << this->lastName << ", firstName: " << this->firstName << ", age: " << *this->age << std::endl;
}
