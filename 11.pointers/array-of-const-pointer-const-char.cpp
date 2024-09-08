#include <iostream>

int main() {
  const char *students[]{
      "Alice",
      "Bob",
      "Charlie",
      "David",
      "Eve",
      "Frank",
      "Grace",
      "Hannah",
  };

  std::cout << "Printing out the students" << std::endl;
  for (const char *student : students) {
    std::cout << student << std::endl;
  }

  const char *new_student{"Bob"};
  std::cout << *new_student << std::endl;

  return 0;
}
