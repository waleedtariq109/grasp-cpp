#include "person.h"

#include <iostream>

Person::Person(std::string lastName, std::string firstName, int age) {
  this->firstName = firstName;
  this->lastName = lastName;
  this->age = new int(age);
}

Person::Person(std::string lastName, std::string firstName) {}

Person::Person(std::string lastName) {}

Person::~Person() {}

void Person::setFirstName(const std::string& firstName) {
  this->firstName = firstName;
}

void Person::setLastName(const std::string& lastName) {
  this->lastName = lastName;
}

void Person::setAge(const int& age) {
  *this->age = age;
}

const std::string& Person::getFirstName() const {
  return this->firstName;
}

const std::string& Person::getLastName() const {
  return this->lastName;
}

const int* Person::getAge() const {
  return this->age;
}

void Person::printPersonInfo() const {
  std::cout << "Person object at " << this << " [lastName: " << this->lastName << ", firstName: " << this->firstName << ", age: " << *this->age << "]" << std::endl;
}
