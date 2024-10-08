#include <iostream>

int main() {
  /**
   * In C++ we can dynamically allocated array with different data types
   * such as: int, long, double etc
   *
   * If our size of array is 10 and we just decalre it but not initialized it
   * then our array contains garbage value and if we used beaced initialization
   * then at each index we have 0 and if we initialized some element then the
   * remaining element with initialized to 0
   *
   *
   * We can also use std::nothrow with new keyword so that it will not throw an exception
   * instead returns nullptr if new keyword failed to allocate the memory in heap
   */

  size_t size{10};

  double *salariesArray{new double[size]};                              // Contains junk value at each index
  int *studentsArray{new (std::nothrow) int[size]{}};                   // All element initialized to 0
  double *scoresArray{new (std::nothrow) double[size]{1, 2, 3, 4, 5}};  // Remaining element initialized to 0

  if (scoresArray) [[likely]] {
    /**
     * We can use bracket notation to access array element
     * or we can use pointer arithmetic
     */
    std::cout << "size of scoresArray: " << sizeof(scoresArray) << std::endl;
    for (size_t i{0}; i < size; ++i) {
      std::cout << "bracket notation: " << scoresArray[i] << " : " << "pointer arithmetic: " << *(scoresArray + i) << std::endl;
    }
  }

  /**
   * Before understanding the `delete[]` operator, we first need to comprehend how the `delete` operator works.
   *
   * The `delete` operator is used to deallocate dynamic memory (heap) that was previously allocated using `new`.
   * When the operator encounters the `delete` keyword, it goes to the specified memory address and calls the destructor for the object being deleted.
   * The destructor is responsible for performing any cleanup tasks and releasing the resources associated with that object.
   * One key point to note is that every user-defined type has a destructor, but built-in types (like `int`, `double`, etc.) do not have destructors.
   *
   * For arrays, we use `delete[]`, which not only deallocates the memory but also ensures that the destructors are called for each element of the array, if they have any.
   * In the case of built-in types, while destructors are not called, `delete[]` correctly frees the entire block of memory allocated for the array.
   *
   * In C++, built-in types (like `int`, `char`, etc.) do not have destructors. When you allocate an array of built-in types on the heap using `new[]`,
   * the C++ runtime uses bookkeeping information to manage memory allocation.
   *
   * When you call `delete[]` on an array, the C++ runtime utilizes this bookkeeping information to determine:
   * - The starting address of the memory block that needs to be deallocated.
   * - The size of the memory block, so it can free the correct amount of memory.
   *
   * Even though built-in types don’t have destructors to be called, `delete[]` ensures that the entire memory allocated for the array is properly released back to the heap.
   *
   * However, built-in types (like `int`, `char`, etc.) do not have destructors. Nevertheless, when you allocate memory for an array of built-in types using `new[]`,
   * the C++ runtime uses a bookkeeping mechanism to track information about the allocated memory, such as the size of the array.
   *
   * When you later call `delete[]`, the C++ runtime refers to this bookkeeping information to:
   * - Identify the starting address of the allocated memory block.
   * - Determine the size of the block that needs to be deallocated.
   *
   * Even though built-in types don't have destructors, the `delete[]` operator ensures that the entire block of memory is correctly deallocated based on this bookkeeping information.
   * So, while destructors are not involved for built-in types, the memory is still properly released.
   */

  delete[] scoresArray;
  delete[] salariesArray;
  delete[] studentsArray;
  scoresArray = nullptr;
  salariesArray = nullptr;
  studentsArray = nullptr;

  /**
   * Static Arrays vs Dynamic Arrays
   *
   * In a static array, we can use std::size to determine the number of elements and
   * also utilize range-based for loops. However, with a dynamic array, we cannot use
   * std::size, and range-based for loops are not directly applicable. Instead, we need
   * to manually specify the size in for loops when working with dynamic arrays.
   *
   * The reason we cannot use std::size and range based loops because we define the
   * dynamic array on heap with the new keyword and new keyword returns the pointer
   * and pointer does not carry the size information that's why we can't the std::size
   * and similarly we can't use range based loops because it need's to know the size
   * of array and pointer does not carry a information about array size.
   *
   * There are other difference as well between stack and heap like
   * Memory allocatons, size, lifetime, peroformance etc
   *
   */

  // Static array
  int staticArray[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  std::cout << "size of static array: " << std::size(staticArray) << std::endl;
  for (auto score : staticArray) {
    std::cout << "score: " << score << std::endl;
  }

  // Dynamic array
  int *dynamicArray{new int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}};
  // std::cout << "size of dynamic array: " << std::size(dynamicArray) << std::endl; // Compiler error
  // for (auto score : dynamicArray) {
  //   std::cout << "score: " << score << std::endl;
  // } // Compiler Error

  return 0;
}
