#include <iostream>

int main() {
  const char *const students[]{
      "Daniel Gray",
      "Tuna Philbe",
      "The Rock",
      "Kumar Singh",
      "Sam Ali",
      "Dave Mahoro",
  };

  std::cout << std::endl;
  std::cout << "Printing out the students" << std::endl;
  for (const char *student : students) {
    std::cout << student << std::endl;
  }

  // *students[0] 'K'; // Compiler Error

  const char *new_student{"Bob the great"};
  // students[0] = new_student;

  std::cout << std::endl;
  std::cout << "Printing out the students" << std::endl;
  for (const char *student : students) {
    std::cout << student << std::endl;
  }

  return 0;
}