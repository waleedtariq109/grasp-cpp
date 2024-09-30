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

  return 0;
}