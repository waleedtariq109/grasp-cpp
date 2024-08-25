#include <iostream>

int main() {
  // Multi-dimensional Array

  /**
   * A multidimensional is like a collections of array grouped togeather,
   * forming a grid or table like pattern.
   *
   * For example in math we have a concept like matrix so we use multidimensional
   * to represent matrix.
   */

  // Delare a 2D array
  /**
   * This will create a 12 unique locations in memory to store integers
   * The size of 1 int is 4 bytes.
   *
   * In packages array we have 12 integers
   * 12 * 4 = 48 bytes
   */

  // int packages[3][4];  // Size of array is 48 bytes in memory

  // Read data from 2D array
  /**
   * In order to read data from our 2D array we have to use nested loops
   * Our outer loop is reading the 1st dimensional data and the inner loop
   * is reading the 2nd dimensional data
   */

  int packages[3][4]{
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12},
  };

  /**
   * i = 0, is 0 less then 3: YES
   * j = 0, is 0 less then 4: YES
   *
   * int packages[3][4]{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 8, 7, 6},
    };

    packages[0][0] -> 1

   */

  for (size_t i = 0; i < 3; ++i) {
    for (size_t j = 0; j < 4; ++j) {
      std::cout << packages[i][j] << "  ";
    }
    std::cout << std::endl;
  }

  std::cout << std::endl;
  std::cout << std::endl;

  /**
   * The std::size(packages) on outer loop will give us the size of first dimension
   *
   * int packages[3][4]{
        0: {1, 2, 3, 4},
        1: {5, 6, 7, 8},
        2: {9, 8, 7, 6},
    };

    So in the outer loop the size will be 3

    The std::size(packages[i]) will give us the size of our 2nd dimension array

    int packages[3][4]{
        0: {1, 2, 3, 4},
        1: {5, 6, 7, 8},
        2: {9, 8, 7, 6},
    };

    packages[i] -> will return the array on each index so the std::size(packages[i])
    will return the size of that array

   */
  // Use std::size to get the size of array dimensions
  for (size_t i = 0; i < std::size(packages); ++i) {
    for (size_t j = 0; j < std::size(packages[i]); ++j) {
      std::cout << packages[i][j] << "  ";
    }
    std::cout << std::endl;
  }

  return 0;
}
