#include <iostream>
#include <string_view>

class Dog {
 public:
  Dog() = default;
  Dog(std::string_view nameParam, std::string_view breedParam, int ageParam);
  ~Dog();

 private:
  std::string name;
  std::string breedName;
  int* agePtr{nullptr};
};

Dog::Dog(std::string_view nameParam, std::string_view breedParam, int ageParam) {
  name = nameParam;
  breedName = breedParam;
  agePtr = new int{ageParam};
  std::cout << "Constructor called for dog: " << name << std::endl;
}

Dog::~Dog() {
  delete agePtr;
  std::cout << "Destructor called for dog: " << name << std::endl;
}

int main() {
  Dog myDog("Fluffy", "Husky", 3);
  Dog myDog1("Fluffy", "Husky", 3);
}
