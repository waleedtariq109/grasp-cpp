#include <iostream>

int main() {
  /**
   * If we have an array and we want to modify the value
   * at each iteration then we can do that with reference
   * and we don't have to set the new variable
   */
  size_t ARRAY_SIZE{10};

  int scores[ARRAY_SIZE]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  std::cout << "Scores (print): ";
  for (int score : scores) {
    std::cout << score << " ";
  }
  std::cout << std::endl;

  // Update scores without reference
  std::cout << "Scores (modify): ";
  for (int score : scores) {
    score *= score;  // This will create a copy of our array and not modify the original array
    std::cout << score << " ";
  }
  std::cout << std::endl;

  std::cout << "Scores (after modify): ";
  for (int score : scores) {
    std::cout << score << " ";  // Getting the original array not modified one
  }
  std::cout << std::endl;

  for (int& score : scores) {
    score *= score;
  }
  std::cout << std::endl;

  std::cout << "Scores (after modification with reference): ";
  for (int score : scores) {
    std::cout << score << " ";  // Getting the original array not modified one
  }
  std::cout << std::endl;

  return 0;
}
