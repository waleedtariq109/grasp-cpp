#include <iostream>

int main() {
  std::cout << std::endl;
  std::cout << "Pointers to chars" << std::endl;
  std::cout << std::endl;

  /**
   * In C++ we can point to a character using a pointer, but there are a few things
   * we need to keep in mind, and a few things that may cause confusion.
   *
   * Things to know:
   * 1: A string literal like "Hello" is stored in a read-only memory section,
   *    so trying to modify it via a pointer leads to undefined behavior.
   * 2: `char *msg = "Hello";` points to the first character of the string literal,
   *    not the entire string.
   * 3: Pointers store the address of a memory location, not the actual content.
   * 4: String literals are null-terminated, meaning they end with `\0` to mark the end.
   *
   * Things that may confuse:
   * 1: `char msg[] = "Hello";` allocates a modifiable array, while
   *    `char *msg = "Hello";` points to a read-only string literal.
   * 2: `msg[0]` gives the first character, but trying `msg[0] = 'h';` is valid
   *    only for `char msg[]`, not for `char *msg`.
   *
   * Difference between `char msg[]` and `char *msg`:
   * - `char msg[]`: A local array where the string can be modified.
   * - `char *msg`: A pointer to a string literal in read-only memory,
   *   which cannot be modified.
   */

  const char *message{"Hello!"};
  std::cout << "Message: " << message << std::endl;

  /**
   * If we dereference the pointer, we will get 'H',
   * not the entire string. The reason is that in C++,
   * strings are stored as an array of characters, and
   * pointers store one address at a time. Since each
   * element of the array has a different address, the
   * pointer points to 'H', the first element of the character array.
   */

  std::cout << "message(dereference): " << *message << std::endl;

  // If we try to change the value through pointer then we will get an error

  // *message = 'B'; //-> Compiler Error

  // Altough We can change the address of a pointer without any error
  char char_var{'U'};
  message = &char_var;

  std::cout << "Message: " << *message << std::endl;

  std::cout << std::endl;

  return 0;
}
