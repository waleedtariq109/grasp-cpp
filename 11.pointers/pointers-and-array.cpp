#include <iostream>

int main() {
  /**
   * The Array name scores will point to a first element
   */
  int scores[10]{11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
  int *p_score{nullptr};

  /**
   * Because the scores points to a first element so we
   * don't need to add a address of operator while assigning
   * the address to pointer
   */

  p_score = scores;

  // Printing out the address
  std::cout << "scores: " << scores << std::endl;
  std::cout << "p_scores: " << p_score << std::endl;

  // Printing the content at that address
  std::cout << std::endl;
  std::cout << "*scores: " << *scores << std::endl;
  std::cout << "scores[0]: " << scores[0] << std::endl;
  std::cout << "*p_score: " << *p_score << std::endl;
  std::cout << "p_score[0]: " << p_score[0] << std::endl;

  // Difference
  int number{87};
  // scores = &number; //Compiler Error
  /**
   * The reason for this error is the array name scores
   * is a constant pointer to the firt element of the array
   */
  p_score = &number;  // This will work
  /**
   * Because we will assign a address of number to a
   * pointer
   */

  std::cout << "p_score: " << p_score << std::endl;

  std::cout << "size: " << std::size(scores) << std::endl;
  // std::cout << "size: " << std::size(p_score) << std::endl; // Error

  return 0;
}
