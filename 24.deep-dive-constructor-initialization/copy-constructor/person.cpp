#include "person.h"

#include <iostream>

Person::Person(std::string lastName, std::string firstName, int age) :
    lastName{lastName}, firstName{firstName}, age{new int(age)} {}

Person::Person(std::string lastName, std::string firstName) :
    lastName{lastName}, firstName{firstName} {}

Person::Person(std::string lastName) :
    lastName{lastName} {}

void Person::setPersonAge(int age) const {
  *this->age = age;
}

void Person::printPersonInfo() const {
  std::cout << "Person object at " << this << " [lastName: " << this->lastName << ", firstName: " << this->firstName << ", age: " << *this->age << "]" << std::endl;
}
