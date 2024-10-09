#include <iostream>

int main() {
  // Check if character is alphanumeric
  std::cout << std::endl;
  std::cout << "std::isalnum" << std::endl;
  std::cout << std::endl;

  /*
   * The std::isalnum() function checks if the given character is alphanumeric (a letter or a digit).
   * It returns:
   * - A non-zero integer (not necessarily 1) for true, indicating the character is alphanumeric.
   * - 0 for false, indicating the character is not alphanumeric.
   * In the following example:
   * - 'C' is an alphanumeric character, so std::isalnum('C') returns 8 (a non-zero value).
   * - '^' is not an alphanumeric character, so std::isalnum('^') returns 0.
   */

  std::cout << "C is alphanumeric: " << std::isalnum('C') << std::endl;
  std::cout << "^ is alphanumeric: " << std::isalnum('^') << std::endl;

  return 0;
}
