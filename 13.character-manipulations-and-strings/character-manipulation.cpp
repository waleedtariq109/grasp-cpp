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
  std::cout << std::endl;

  // Check if character is blank
  char message[]{"Hello NUST, I'm Waleed Tariq a senior software engineer at GOOGLE"};
  std::cout << "Original String: " << message << std::endl;
  size_t blankCount{};
  for (size_t i{0}; i < std::size(message); ++i) {
    if (std::isblank(message[i])) {
      std::cout << "Found a blank character at: " << "[" << i << "]" << std::endl;
      ++blankCount;
    }
  }
  std::cout << "We have total " << blankCount << " character's" << std::endl;
  std::cout << std::endl;

  // Check if character is uppercase or lowercase
  char message1[]{"Hello NUST, I'm Waleed Tariq a senior software engineer at GOOGLE"};
  size_t uppercaseCount{};
  size_t lowercaseCount{};
  std::cout << "Original String: " << message1 << std::endl;
  for (size_t i{0}; i < std::size(message1); ++i) {
    if (std::isupper(message1[i])) {
      std::cout << "Found a uppercase character at: " << "[" << i << "]" << std::endl;
      ++uppercaseCount;
    } else if (std::islower(message1[i])) {
      std::cout << "Found a lowercase character at: " << "[" << i << "]" << std::endl;
      ++lowercaseCount;
    }
  }

  std::cout << std::endl;
  std::cout << "Total uppercase character's " << uppercaseCount << std::endl;
  std::cout << "Total lowercase character's " << lowercaseCount << std::endl;

  std::cout << std::endl;

  // Check if character is digit
  char message2[]{"Hello NUST, I'm Waleed Tariq. I am 27 years old with 8 years of exprience"};
  std::cout << "Original message: " << message2 << std::endl;
  size_t digitCount{};
  for (auto character : message2) {
    if (std::isdigit(character)) {
      std::cout << "Found digit: " << character << std::endl;
      ++digitCount;
    }
  }
  std::cout << "Total digit count: " << digitCount << std::endl;
  std::cout << std::endl;

  // Turn character into uppercase and lowercase

  std::cout << "Conver lowercase into uppercase" << std::endl;
  char message3[]{"Hello NUST, I'm Waleed Tariq. I am 27 years old with 8 years of exprience"};
  for (auto& character : message3) {
    character = std::toupper(character);
  }
  std::cout << "Uppercase message3: " << message3 << std::endl;
  std::cout << std::endl;

  for (auto& character : message3) {
    character = std::tolower(character);
  }
  std::cout << "Lowercase message3: " << message3 << std::endl;

  std::cout << std::endl;

  return 0;
}
