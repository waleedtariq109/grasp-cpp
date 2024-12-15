#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
  public:
    // Constructors
    Person() = default;
    Person(std::string lastName, std::string firstName, int age);
    Person(std::string lastName, std::string firstName);
    Person(std::string lastName);

    // Destructors
    ~Person();

    // Setters
    void setFirstName(const std::string& firstName);
    void setLastName(const std::string& lastName);
    void setAge(int& age);

    // Getters
    const std::string& getFirstName() const;
    const std::string& getLastName() const;
    int* getAge() const;

    // Utilities
    void printInfo() const;

  private:
    std::string lastName{};
    std::string firstName{};
    int* age{nullptr};
};

#endif