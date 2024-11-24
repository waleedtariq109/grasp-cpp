#include "person.h"

#include <iostream>

Person::Person(std::string lastName, std::string firstName, int age) {}

Person::Person(std::string lastName, std::string firstName) {}

Person::Person(std::string lastName) {}

void Person::setPersonAge(int age) const {}

void Person::printPersonInfo() const {
  std::cout << "Person object at " << this << " [lastName: " << this->lastName << ", firstName: " << this->firstName << ", age: " << *this->age << "]" << std::endl;
}
