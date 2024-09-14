#include <iostream>

int main() {
  const char *students[]{
      "Student1",
      "Student2",
      "Student3",
      "Student4",
      "Student5",
  };

  // Print students
  std::cout << std::endl;
  for (const char *student : students) {
    std::cout << student << std::endl;
  }
  return 0;
}
