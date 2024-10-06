#include <iostream>

int main() {
  int arr0[5]{1, 2, 3, 4, 5};
  int arr1[5]{6, 7, 8, 9, 10};

  int *p_arr0{arr0};
  int *p_arr1{arr1};

  std::cout << "arr0: ";
  for (size_t i{0}; i < std::size(arr0); ++i) {
    std::cout << *(p_arr0 + i) << " ";
  }
  std::cout << std::endl;

  std::cout << "arr1: ";
  for (size_t i{0}; i < std::size(arr1); ++i) {
    std::cout << *(p_arr1 + i) << " ";
  }
  std::cout << std::endl;

  int *temp_pointer{nullptr};

  temp_pointer = arr0;
  p_arr0 = p_arr1;
  p_arr1 = temp_pointer;

  std::cout << "arr0: ";
  for (size_t i{0}; i < std::size(arr0); ++i) {
    std::cout << *(p_arr0 + i) << " ";
  }
  std::cout << std::endl;

  std::cout << "arr1: ";
  for (size_t i{0}; i < std::size(arr1); ++i) {
    std::cout << *(p_arr1 + i) << " ";
  }
  std::cout << std::endl;

  return 0;
}
