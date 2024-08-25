#include <iostream>

int main() {
  const size_t name_length{15};
  char members[][name_length]{
      {'J', 'o', 'h', 'n'},
      {'S', 'a', 'm', 'u', 'e', 'l'},
      {'R', 'a', 's', 'h', 'i', 'd'},
      {'R', 'o', 'd', 'r', 'i', 'g', 'e', 'z', 'R', 'o', 'd', 'r', 'i', 'g', 'e'},
  };
  /**
   * Printing out data like this is unsafe because as long as out character array
   * within the 15 size the compiler will automatically add the null terminator
   * at the end but if we have a character array which is size of 15 then we have a problem
   * because the program will run until it hit the null termintor.
   */
  std::cout << "Unsafe way of printing multidimensional character array" << std::endl;
  for (size_t i = 0; i < std::size(members); ++i) {
    std::cout << members[i] << std::endl;
  }

  std::cout << std::endl;
  std::cout << std::endl;

  // Looping out each character manually or individually
  for (size_t i = 0; i < std::size(members); ++i) {
    for (size_t j = 0; j < std::size(members[i]); ++j) {
      std::cout << members[i][j];
    }
    std::cout << std::endl;
  }

  // The better way is to use c strings literals
  // This will ensure that the string is null terminated

  std::cout << std::endl;
  char member1[][name_length]{
      "John",
      "Samuel",
      "Rashid",
      "RodriguezRodri",
  };
  std::cout << "Printing out members 1 (C-String Literals) the more safer way" << std::endl;
  for (size_t i = 0; i < std::size(member1); ++i) {
    std::cout << member1[i] << std::endl;
  }

  return 0;
}
