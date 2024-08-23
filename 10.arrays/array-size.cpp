#include <iostream>

int main()
{
  // Size of an array

  // Modern Way
  int scores[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  int count{std::size(scores)}; // Introduced in C++-17
  for (size_t i{0}; i < count; ++i)
  {
    std::cout << "scores: " << scores[i] << std::endl;
  }

  std::cout << std::endl;

  /**
   * int scores[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
   *
   * The type of this array is int and the int is occupied 4 bytes in memory
   * The sizeof() function returns the total bytes which is taked by some value
   *
   * sizeof(scores)    -> 13*4 = 52 bytes
   * sizeof(scores[0]) -> 4 bytes
   *                      52/4 = 13 total el array
   */

  std::cout << "sizeof(scores): " << sizeof(scores) << std::endl;
  std::cout << "sizeof(scores[0]): " << sizeof(scores[0]) << std::endl;
  std::cout << "total array size: " << sizeof(scores) / sizeof(scores[0]) << std::endl;

  std::cout << std::endl;

  // Old Way
  int arr_cout{sizeof(scores) / sizeof(scores[0])};
  for (size_t i{0}; i < arr_cout; ++i)
  {
    std::cout << "scores: " << scores[i] << std::endl;
  }
  return 0;
}
