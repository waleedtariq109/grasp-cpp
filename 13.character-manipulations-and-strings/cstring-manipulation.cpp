#include <cstring>
#include <iostream>

int main() {
  /**
   * Documented on Notion
   */

  const char message1[]{"The sky is blue"};
  const char *message2{"The sky is blue"};

  std::cout << "message1: " << message1 << std::endl;
  std::cout << "message2: " << message2 << std::endl;
  std::cout << std::endl;

  // Character Array decay into pointer
  std::cout << "strlen(message1): " << std::strlen(message1) << std::endl;
  std::cout << "sizeof(message1): " << sizeof(message1) << std::endl;

  // Pointer to Characters Array
  std::cout << "strlen(message2): " << std::strlen(message2) << std::endl;
  std::cout << "sizeof(message2): " << sizeof(message2) << std::endl;

  std::cout << std::endl;

  /**
   * std::strcmp
   */

  const char *stringData1{"Alabama"};
  const char *stringData2{"Blabama"};

  char stringData3[]{"Alabama"};
  char stringData4[]{"Blabama"};

  // Comparing strings
  std::cout << "std::strcmp(" << stringData1 << "," << stringData2 << "): " << std::strcmp(stringData1, stringData2) << std::endl;
  std::cout << "std::strcmp(" << stringData3 << "," << stringData4 << "): " << std::strcmp(stringData3, stringData4) << std::endl;

  stringData1 = "Pakistan";
  stringData2 = "Pakistan";

  std::cout << "std::strcmp(" << stringData1 << "," << stringData2 << "): " << std::strcmp(stringData1, stringData2) << std::endl;

  std::cout << std::endl;

  /**
   * std::strncmp
   */

  const char *str1 = "Apple";
  const char *str2 = "Apples";
  size_t n{5};

  // Compare first 5 characters
  int result = std::strncmp(str1, str2, n);
  if (result == 0) {
    std::cout << "The first 5 characters are equal." << std::endl;
  } else if (result < 0) {
    std::cout << "str1 is less than str2." << std::endl;
  } else {
    std::cout << "str1 is greater than str2." << std::endl;
  }

  std::cout << std::endl;

  /**
   * std::strchr
   */

  const char *const str{"Try not. Do, or do not. There is no try."};
  char Target{'T'};
  const char *result1{str};
  int iteration{0};

  while ((result1 = std::strchr(result1, Target)) != nullptr) {
    std::cout << "Found: " << Target << " starting at " << result1 << '\n';
    ++result1;
    ++iteration;
  }
  std::cout << "iterations: " << iteration << std::endl;

  return 0;
}
