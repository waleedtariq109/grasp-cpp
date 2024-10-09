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

  std::cout << std::endl;

  // We can also use std::isalnum as a test
  char character{'*'};
  if (std::isalnum(character)) {
    std::cout << character << " is an alphanumeric character" << std::endl;
  } else [[likely]] {
    std::cout << character << " is not an alphanumeric character" << std::endl;
  }

  std::cout << std::endl;

  // Check if character is alphabetic
  /**
   * std::isalpha returns non-zero value if character is alphabetic
   * and returns 0 is character is not alphabetic
   */
  std::cout << "Check if character is alphabetic (std::isalpha)" << std::endl;
  std::cout << "C is alphabetic: " << std::isalpha('C') << std::endl;
  std::cout << "^ is alphabetic: " << std::isalpha('^') << std::endl;
  std::cout << "7 is alphabetic: " << std::isalpha('7') << std::endl;

  std::cout << std::endl;

  // Test if char isalpha
  char char1{'A'};
  if (std::isalpha(char1)) [[likely]] {
    std::cout << char1 << " is aplhabetic character" << std::endl;
  } else {
    std::cout << char1 << " is non-alphabetic character" << std::endl;
  }

  return 0;
}
