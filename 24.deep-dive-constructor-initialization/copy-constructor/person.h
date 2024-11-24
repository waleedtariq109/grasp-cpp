#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
 public:
  Person() = default;
  Person(std::string lastName, std::string firstName, int age);
  Person(std::string lastName, std::string firstName);
  Person(std::string lastName);

  ~Person();

  // Setters
  void setFirstName(const std::string& firstName);
  void setLastName(const std::string& lastName);
  void setAge(const int& age);

  // Getters
  const std::string& getFirstName() const;
  const std::string& getLastName() const;
  const int* getAge() const;

  // Utilities
  void printPersonInfo() const;

 private:
  std::string firstName{};
  std::string lastName{};
  int* age{nullptr};
};

#endif