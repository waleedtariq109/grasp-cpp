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

  std::cout << std::endl;
  std::cout << std::endl;

  int house_block[7][5][3]{
      {
          {1, 2, 3},
          {4, 5, 6},
          {7, 8, 9},
          {10, 11, 12},
          {13, 14, 15},
      },
      {
          {16, 17, 18},
          {19, 20, 21},
          {22, 23, 24},
          {25, 26, 27},
          {28, 29, 30},
      },
      {
          {31, 32, 33},
          {34, 35, 36},
          {37, 38, 39},
          {40, 41, 42},
          {43, 44, 45},
      },
      {
          {46, 47, 48},
          {49, 50, 51},
          {52, 53, 54},
          {55, 56, 57},
          {58, 59, 60},
      },
      {
          {61, 62, 63},
          {64, 65, 66},
          {67, 68, 69},
          {70, 71, 72},
          {73, 74, 75},
      },
      {
          {76, 77, 78},
          {79, 80, 81},
          {82, 83, 84},
          {85, 86, 87},
          {88, 89, 90},
      },
      {
          {91, 92, 93},
          {94, 95, 96},
          {97, 98, 99},
          {100, 101, 102},
          {103, 104, 105},
      },
  };

  // Looping through 3d array
  for (size_t i = 0; i < std::size(house_block); ++i) {
    for (size_t j = 0; j < std::size(house_block[i]); ++j) {
      for (size_t k = 0; k < std::size(house_block[i][j]); ++k) {
        std::cout << house_block[i][j][k] << "  ";
      }
      std::cout << std::endl;
    }
  }

  // Omit the size of an array
  /**
   * We can only omit 1st or left most dimension and compiler will deduce the size of 1st diemension
   * of our multi dimensional array
   *
   * If we set a size in another varible we have to make the variable const otherwise we will
   * get a compiler error.
   */

  const size_t num_cols{3};
  int packages2[][num_cols]{
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9},
      {10, 11, 12},
  };

  std::cout << std::endl;
  std::cout << "Omiting size of the left most 2d array" << std::endl;
  std::cout << std::endl;
  for (size_t i = 0; i < std::size(packages2); ++i) {
    for (size_t j = 0; j < std::size(packages2[i]); ++j) {
      std::cout << "packages[" << i << "][" << j << "]: " << packages2[i][j] << std::endl;
    }
  }

  /**
   * One thing to keep in mind if you set the size of your multi dimensional array
   * but not adding the enough element in array then the compiler will fill the
   * rest of the remainig elements with 0;
   */

  int house_block2[][5][4]{
      {
          {1, 2, 3},
          {4},
          {7, 8, 9},
          {10, 11, 12},
          {13, 14, 15},

      },
      {
          {16, 17, 18},
          {19, 20, 21},
          {22, 23, 24},
          {25, 26, 27},
          {28, 29, 30},
      },
      {
          {31, 32, 33},
          {34, 35, 36},
          {37, 38, 39},
          {40, 41, 42},
          {43, 44, 45},
      },
      {
          {46, 47, 48},
          {49, 50, 51},
          {52, 53, 54},
          {55, 56, 57},
      },
  };

  house_block2[0][1][0] = 10;

  for (size_t i = 0; i < std::size(house_block2); ++i) {
    for (size_t j = 0; j < std::size(house_block2[i]); ++j) {
      for (size_t k = 0; k < std::size(house_block2[i][j]); ++k) {
        std::cout << house_block2[i][j][k] << "  ";
      }
      std::cout << std::endl;
    }
  }

  return 0;
}
