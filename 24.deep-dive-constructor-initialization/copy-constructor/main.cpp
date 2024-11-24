#include <iostream>

#include "person.h"

int main() {
  Person person1("Tariq", "Waleed", 23);
  Person person2(person1);

  person1.printPersonInfo();
  person2.printPersonInfo();

  person1.setPersonAge(24);

  person1.printPersonInfo();
  person2.printPersonInfo();
}
