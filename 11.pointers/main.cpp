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

  // std::nothrow
  /**
   * When the memory allocation is failed then the std::nothrow
   * will return a nullptr instead of heap memory address
   *
   * It happens because the new keyword is an operator, specifically
   * the memory allocation operator. When new fails due to a bad allocation,
   * it normally throws a std::bad_alloc exception by default. However,
   * we can modify this behavior to prevent throwing an exception
   * by simply passing std::nothrow as an argument to the new operator.
   * We are able to pass an argument to an operator due to operator overloading in C++.
   */
  for (size_t i{0}; i < 10; ++i) {
    int* data = new (std::nothrow) int[1000000000000000];
    if (data != nullptr) {
      std::cout << "Data is allocated successfully" << std::endl;
    } else [[likely]] {
      std::cout << "Data is not allocated" << std::endl;
    }
  }

  return 0;
}
