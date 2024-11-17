#ifndef DOG_CLASS_HEADER
#define DOG_CLASS_HEADER

#include <string>

class Dog {
 public:
  Dog() = default;
  Dog(const std::string& name, const std::string& breed, const unsigned int& age);

  // Getters and setters
  std::string& Name();
  std::string& Breed();
  unsigned int& Age();

  // Helpers
  void printInfo() const;

 private:
  std::string name;
  std::string breed;
  mutable unsigned int age;
  /**
   *This variable can me modified inside const member function
   */
};

#endif