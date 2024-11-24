#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
 public:
  Person() = default;
  Person(std::string lastName, std::string firstName, int age);
  Person(std::string lastName, std::string firstName);
  Person(std::string lastName);

  void printPersonInfo();

 private:
  std::string firstName{};
  std::string lastName{};
  int* age{};
};

#endif