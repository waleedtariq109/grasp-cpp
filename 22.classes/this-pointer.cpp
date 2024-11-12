#include <iostream>
#include <string_view>

class Dog {
 public:
  Dog() = default;
  Dog(std::string_view nameParam, std::string_view breedParam, int ageParam);
  ~Dog();

 private:
  std::string name;
  std::string breed;
  int *age{nullptr};
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

int main() {
  Dog dog1("Fluffy", "Husky", 2);

  std::cout << "DONE" << std::endl;
}
