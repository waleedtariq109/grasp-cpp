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
  return 0;
}
