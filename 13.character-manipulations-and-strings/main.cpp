#include <cstring>
#include <iostream>

int main() {
  /**
   * C-String Manipulation
   */
  const char message1[]{"The sky is blue"};
  const char *message2{"The sky is blue"};

  std::cout << "message1: " << message1 << std::endl;
  std::cout << "message2: " << message2 << std::endl;
  std::cout << std::endl;

  /**
   * std::strlen
   *
   * The strlen function expects a pointer to a C-style string (a character array)
   * and returns the length of the string, which is the number of characters
   * before the null terminator ('\0').
   *
   * The strlen function ignores the null terminator itself and does not include
   * it in the returned length.
   *
   * When working with C-Strings, we need to ensure that a null terminator is
   * present at the end of the character array. This null terminator marks the
   * end of the string. If the null terminator is missing, the function will
   * continue reading memory beyond the intended string, which can lead to
   * undefined behavior until it finds a null terminator.
   *
   */

  // Character Array decay into pointer
  std::cout << "strlen(message1): " << std::strlen(message1) << std::endl;
  std::cout << "sizeof(message1): " << sizeof(message1) << std::endl;

  // Pointer to Characters Array
  std::cout << "strlen(message2): " << std::strlen(message2) << std::endl;
  std::cout << "sizeof(message2): " << sizeof(message2) << std::endl;

  /**
   * The sizeof message2 is 8 bytes because, on a 64-bit machine,
   * the size of a pointer is typically 8 bytes.
   *
   * Explanation:
   * - 1 byte = 8 bits
   * - On a 64-bit machine, pointers are 64 bits in size.
   * - 64 bits / 8 bits per byte = 8 bytes
   *
   * Therefore, sizeof(message2) returns 8 bytes because message2 is a pointer
   * (const char*) to the string literal, and on a 64-bit system, the size
   * of a pointer is 8 bytes.
   */

  std::cout << std::endl;

  return 0;
}
