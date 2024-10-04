#include <iostream>

int main() {
  int scores[10]{11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

  /**
   * To calculate the distance between two array elements, we need to
   * initialize two pointers, each pointing to an array element. We can
   * use both array bracket notation and pointer arithmetic to access
   * the array elements.
   *
   * To find the distance between two elements, we perform arithmetic
   * operations on these pointers. The result can be either negative or
   * positive.
   *
   * Let's say we subtract `pointer1` from `pointer2`. If `pointer2`
   * is ahead of `pointer1`, we will get a positive result. However,
   * if `pointer2` is behind `pointer1`, the result will be negative.
   *
   * Now, what happens when we subtract both pointers? Pointers hold
   * memory addresses, which are stored in binary form in memory. The CPU
   * directly performs arithmetic operations on these binary values.
   * Although we typically see memory addresses in hexadecimal format
   * for readability, they are stored in binary in the system.
   *
   * After performing the subtraction, the compiler divides the result by
   * 4. This division occurs because the pointers point to `int` types,
   * and `int` typically occupies 4 bytes. Consequently, the CPU divides
   * the raw result by 4 to yield the exact distance between the two
   * elements that `pointer1` and `pointer2` point to.
   *
   * Visual Representation:
   *
   * | Index | Array Element | Memory Address |
   * |-------|---------------|----------------|
   * |  0    |      11      |    0x1000      |
   * |  1    |      12      |    0x1004      |
   * |  2    |      13      |    0x1008      |
   * |  3    |      14      |    0x100C      |
   * |  4    |      15      |    0x1010      |
   * |  5    |      16      |    0x1014      |
   * |  6    |      17      |    0x1018      |
   * |  7    |      18      |    0x101C      |
   * |  8    |      19      |    0x1020      |
   * |  9    |      20      |    0x1024      |
   *
   * Pointer1 points to scores[0] (0x1000)
   * Pointer2 points to scores[8] (0x1020)
   *
   * Subtraction:
   *
   * ```
   * Address of Pointer2 - Address of Pointer1:
   * 0x1020 - 0x1000 = 0x020 = 32 (in bytes)
   *
   * Division:
   *
   * (32 bytes) / 4 bytes per element = 8 elements
   *
   * Result:
   * The distance between scores[0] and scores[8] is 8 elements.
   * ```
   */

  // Array bracket notation
  /*
    int *pointer1{&scores[0]};
    int *pointer2{&scores[8]};
  */

  // Pointer Arithmetic notation
  int *pointer1{scores + 0};
  int *pointer2{scores + 8};

  std::cout << "pointer2 - pointer1: " << pointer2 - pointer1 << std::endl;
  std::cout << "pointer1 - pointer2: " << pointer1 - pointer2 << std::endl;

  std::ptrdiff_t positive_difference{pointer2 - pointer1};
  std::ptrdiff_t negative_difference{pointer1 - pointer2};

  std::cout << "positive_difference: " << positive_difference << std::endl;
  std::cout << "negative_difference: " << negative_difference << std::endl;
  std::cout << "sizeof(std::ptrdiff_t): " << sizeof(std::ptrdiff_t) << std::endl;

  return 0;
}
