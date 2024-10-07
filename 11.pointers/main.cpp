#include <iostream>

int main() {
  /**
   * The new keyword can fail if there isn't enough available memory to
   * allocate a large array or a large block of memory. When this happens,
   * by default, new will throw an exception.
   *
   * When we allocate the memory on heap which is beyond it's limit then we
   * will get an error
   */

  // int *data = new int[1000000000000000000];  // Throw an exception

  /**
   * We can also exhaust the heap memory through loop
   */

  /*
  for (size_t i{0}; i < 1000000000; ++i) {
    int *data = new int[1000000000];
  }
  */

  /**
   * To handle this kind of behaviour we have few things
   *
   * 1: Exceptions
   * 2: std::nothrow
   */

  // Exception
  try {
    for (size_t i{0}; i < 1000000000; ++i) {
      int* data = new int[1000000000];
    }
  } catch (std::exception& err) {
    std::cerr << "Something went wrong: " << err.what() << std::endl;
  }

  return 0;
}
