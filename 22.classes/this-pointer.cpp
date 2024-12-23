#include <iostream>
#include <string_view>

class Dog {
 public:
  Dog() = default;
  Dog(std::string_view nameParam, std::string_view breedParam, int ageParam);
  ~Dog();
  Dog* setDogName(std::string_view name);
  Dog* setDogAge(int age);
  Dog* setDogBreed(std::string_view breed);
  void printDogInfo();

 private:
  std::string name;
  std::string breed;
  int* age{nullptr};
};

Dog::Dog(std::string_view nameParam, std::string_view breedParam, int ageParam) {
  name = nameParam;
  breed = breedParam;
  age = new int(ageParam);
  std::cout << "Dog constructor called for " << name << " at " << this << std::endl;
}

Dog::~Dog() {
  delete age;
  std::cout << "Dog destructor called for " << name << " at " << this << std::endl;
}

Dog* Dog::setDogName(std::string_view name) {
  this->name = name;
  return this;
}

void Dog::printDogInfo() {
  std::cout << "Dog(" << this << "): " << "[name: " << this->name << ", " << "breed: " << this->breed << ", " << "age: " << *this->age << "]" << std::endl;
}

Dog* Dog::setDogBreed(std::string_view breed) {
  this->breed = breed;
  return this;
}

Dog* Dog::setDogAge(int age) {
  *this->age = age;
  return this;
}

int main() {
  Dog dog1("Fluffy", "Husky", 2);
  dog1.printDogInfo();

  dog1.setDogName("Chop");
  dog1.setDogBreed("Shephered");
  dog1.setDogAge(3);
  dog1.printDogInfo();

  dog1.setDogName("Ala bai")->setDogBreed("Central Asian Shephered")->setDogAge(3);
  dog1.printDogInfo();

  std::cout << "DONE" << std::endl;
}
