#include "person.h"

#include <iostream>

Person::Person(std::string firstName, std::string lastName, int* age) :
    firstName(firstName), lastName(lastName), age(age) {
}

Person::Person(std::string firstName, std::string lastName) :
    firstName(firstName), lastName(lastName) {
}

Person::Person(std::string firstName) :
    firstName(firstName) {
}

void Person::printPersonInfo() const {
  std::cout << "firstName: " << this->firstName << std::endl;
  std::cout << "lastName: " << this->lastName << std::endl;
  std::cout << "age: " << this->age << std::endl;
}
