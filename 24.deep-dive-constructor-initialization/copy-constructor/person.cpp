#include <iostream>
#include <string>

#include "person.h"

Person::Person(std::string lastName, std::string firstName, int age) : lastName(lastName), firstName(firstName), age(new int(age)) {}

Person::Person(std::string lastName, std::string firstName) : lastName(lastName), firstName(firstName) {}

Person::Person(std::string lastName) : lastName(lastName) {}

Person::~Person() {
  delete this->age;
}

void Person::setFirstName(const std::string& firstName) {
  this->firstName = firstName;
}

void Person::setLastName(const std::string& lastName) {
  this->lastName = lastName;
}

void Person::setAge(int& age) {
  *this->age = age;
}

const std::string& Person::getFirstName() const {
  return this->firstName;
}

const std::string& Person::getLastName() const {
  return this->lastName;
}

int* Person::getAge() const {
  return this->age;
}

void Person::printInfo() const {
  std::cout << "Object Address: " << this << std::endl;
  std::cout << "First name: " << this->firstName << std::endl;
  std::cout << "Last name: " << this->lastName << std::endl;
  std::cout << "Age: " << *this->age << std::endl;
}
