#include "dog.h"

#include <iostream>

Dog::Dog(std::string_view name, std::string_view breed, unsigned int age) {
  this->name = name;
  this->breed = breed;
  this->age = age;
};

// Getters
std::string_view Dog::getName() {
  return this->name;
};
std::string_view Dog::getBreed() {
  return this->breed;
};
unsigned int Dog::getAge() {
  return this->age;
};

// Setters
void Dog::setName(std::string_view name) {
  this->name = name;
};
void Dog::setBreed(std::string_view breed) {
  this->breed = breed;
};
void Dog::setAge(int age) {
  this->age = age;
};

// Helpers
void Dog::printInfo() {
  std::cout << "name: " << this->name << std::endl;
  std::cout << "breed: " << this->breed << std::endl;
  std::cout << "age: " << this->age << std::endl;
};