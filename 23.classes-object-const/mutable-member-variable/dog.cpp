#include "dog.h"

#include <iostream>

Dog::Dog(const std::string& name, const std::string& breed, const unsigned int& age) {
  this->name = name;
  this->breed = breed;
  this->age = age;
};

// Getters
std::string& Dog::Name() {
  return this->name;
};
std::string& Dog::Breed() {
  return this->breed;
};
unsigned int& Dog::Age() {
  return this->age;
};

// Helpers
void Dog::printInfo() const {
  ++this->age;
  std::cout << "name: " << this->name << std::endl;
  std::cout << "breed: " << this->breed << std::endl;
  std::cout << "age: " << this->age << std::endl;
};