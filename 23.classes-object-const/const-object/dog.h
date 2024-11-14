#ifndef DOG_CLASS_HEADER
#define DOG_CLASS_HEADER

#include <string>
#include <string_view>

class Dog {
 public:
  Dog() = default;
  Dog(std::string_view name, std::string_view breed, unsigned int age);

  // Getters
  std::string_view getName();
  std::string_view getBreed();
  unsigned int getAge();

  // Setters
  void setName(std::string_view name);
  void setBreed(std::string_view breed);
  void setAge(int age);

  // Helpers
  void printInfo();

 private:
  std::string_view name;
  std::string_view breed;
  unsigned int age;
};

#endif