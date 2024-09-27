#include <iostream>

int main() {
  const int ARRAY_SIZE = 5;

  // Swaping array data using loop
  int array_1[ARRAY_SIZE]{1, 2, 3, 4, 5};
  int array_2[ARRAY_SIZE]{6, 7, 8, 9, 10};
  int temp_array[ARRAY_SIZE];

  // Move array_1 data to temp_array
  for (size_t i{0}; i < std::size(array_1); ++i) {
    temp_array[i] = array_1[i];
  }

  // Move array_2 data to array_1
  for (size_t i{0}; i < std::size(array_2); ++i) {
    array_1[i] = array_2[i];
  }

  // MOve temp_array data to array_2
  for (size_t i{0}; i < std::size(temp_array); ++i) {
    array_2[i] = temp_array[i];
  }

  // Printing out the array
  std::cout << "Array 1 data: ";
  for (size_t i{0}; i < std::size(array_1); ++i) {
    std::cout << array_1[i];
  }
  std::cout << std::endl;
  std::cout << "Array 2 data: ";
  for (size_t i{0}; i < std::size(array_2); ++i) {
    std::cout << array_2[i];
  }
  std::cout << std::endl;

  // Swaping Array data through pointer

  int array_3[ARRAY_SIZE]{1, 2, 3, 4, 5};
  int array_4[ARRAY_SIZE]{6, 7, 8, 9, 10};

  int *arr3_pointer{array_3};
  int *arr4_pointer{array_4};
  int *temp_pointer{nullptr};

  temp_pointer = arr3_pointer;
  arr3_pointer = arr4_pointer;
  arr4_pointer = temp_pointer;

  std::cout << "Array3 data: ";
  for (size_t i{0}; i < std::size(array_3); ++i) {
    std::cout << arr3_pointer[i];
  }

  std::cout << std::endl;

  std::cout << "Array4 data: ";
  for (size_t i{0}; i < std::size(array_4); ++i) {
    std::cout << arr4_pointer[i];
  }

  std::cout << std::endl;

  return 0;
}
