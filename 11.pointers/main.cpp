#include <iostream>

int main() {
  int arr1[5]{1, 2, 3, 4, 5};
  int arr2[5]{6, 7, 8, 9, 10};
  int temp[5];

  // arr1 -> temp
  for (size_t i{0}; i < std::size(arr1); ++i) {
    temp[i] = arr1[i];
  }
  // arr2 -> arr1
  for (size_t i{0}; i < std::size(arr2); ++i) {
    arr1[i] = arr2[i];
  }
  // temp -> arr2
  for (size_t i{0}; i < std::size(temp); ++i) {
    arr2[i] = temp[i];
  }
  std::cout << "Array 1: ";
  for (size_t i{0}; i < std::size(arr1); ++i) {
    std::cout << arr1[i] << " ";
  }
  std::cout << std::endl;
  std::cout << "Array 2: ";
  for (size_t i{0}; i < std::size(arr2); ++i) {
    std::cout << arr2[i] << " ";
  }
  std::cout << std::endl;

  // Sawaping Array Data through pointer

  std::cout << "Swapping Array Data through pointers" << std::endl;

  int arr3[5]{1, 2, 3, 4, 5};
  int arr4[5]{6, 7, 8, 9, 10};

  int *arr3_pointer = arr3;
  int *arr4_pointer = arr4;
  int *temp1 = nullptr;

  temp1 = arr3_pointer;
  arr3_pointer = arr4_pointer;
  arr4_pointer = temp1;

  for (size_t i{0}; i < std::size(arr3); ++i) {
    std::cout << arr3_pointer[i] << " ";
  }
  std::cout << std::endl;
  for (size_t i{0}; i < std::size(arr4); ++i) {
    std::cout << arr4_pointer[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
