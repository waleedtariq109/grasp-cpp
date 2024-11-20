#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
 public:
  Person() = default;
  Person(std::string firstName, std::string lastName, int* age);
  Person(std::string firstName, std::string lastName);
  Person(std::string firstName);

  void printPersonInfo() const;

 private:
  std::string firstName{};
  std::string lastName{};
  int* age{nullptr};
};

#endif