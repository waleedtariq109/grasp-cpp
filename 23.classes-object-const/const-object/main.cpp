#include <iostream>
#include <string_view>

#include "dog.h"

int main() {
  /**
   * When we make our dog object `const`, we can't read or write the
   * data inside it. It makes sense that attempting to write data would
   * cause a compiler error, but it may seem confusing when reading data
   * also results in an error. After all, our intention is just to read,
   * not to modify. So why does the compiler give an error?
   *
   * The answer is that the compiler doesn't distinguish between getters
   * and setters. It's up to us to know which functions are getters and
   * which are setters. Technically, a getter could also mutate data,
   * so the compiler prevents any access that could lead to unintended
   * modification. That's why it doesn't allow us to read data from a
   * `const` object.
   */

  const Dog dog1("Chop", "Shephered", 2);

  // Compiler error
  /*
    dog1.printInfo();
    dog1.setName("Hassan");
    dog1.printInfo();
  */
}
