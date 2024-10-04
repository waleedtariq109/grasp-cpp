#include <iostream>

int main() {
  // Pointer Arithmetic
  int scores[10]{11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
  int *p_scores{scores};

  /**
   * When we execute the statement ++p_scores, the compiler first checks the data type.
   * Since p_scores points to an int and the typical size of an int is 4 bytes,
   * the pointer will move 4 bytes ahead in memory.
   * Because the array is stored sequentially in memory, after moving 4 bytes,
   * p_scores will point to the next element, which is located at the next address.
   */

  std::cout << "Values in scores array (p_score pointer increment)" << std::endl;
  // ++p_scores Incremented by the sizeof(int): which is 4 bytes

  std::cout << "Address: " << p_scores << " Value: " << *(p_scores) << std::endl;
  ++p_scores;

  std::cout << "Address: " << p_scores << " Value: " << *(p_scores) << std::endl;
  ++p_scores;

  std::cout << "Address: " << p_scores << " Value: " << *(p_scores) << std::endl;
  ++p_scores;

  std::cout << "Address: " << p_scores << " Value: " << *(p_scores) << std::endl;
  ++p_scores;

  std::cout << "Address: " << p_scores << " Value: " << *(p_scores) << std::endl;
  ++p_scores;

  std::cout << "Address: " << p_scores << " Value: " << *(p_scores) << std::endl;
  ++p_scores;

  std::cout << "Address: " << p_scores << " Value: " << *(p_scores) << std::endl;
  ++p_scores;

  std::cout << "Address: " << p_scores << " Value: " << *(p_scores) << std::endl;
  ++p_scores;

  std::cout << "Address: " << p_scores << " Value: " << *(p_scores) << std::endl;
  ++p_scores;

  std::cout << "Address: " << p_scores << " Value: " << *(p_scores) << std::endl;

  /**
   * We can also increment the pointer by explicit integer
   */

  std::cout << std::endl;
  std::cout << "Explicit addition of integer" << std::endl;
  p_scores = scores;                                           // Reset the p_score pointer
  std::cout << "scores[4]: " << *(p_scores + 4) << std::endl;  // move forward by 4*sizeof(int)

  /**
   * In the first example we are manually increment pointer and print it out.
   * But as we know we have loops in c++ so what we can do is to use loops
   * which is more readable and easier.
   */

  std::cout << std::endl;
  p_scores = scores;  // Reset the pointer
  std::cout << "Pointer Arithmetic on p_score pointer and a for loop" << std::endl;
  for (size_t i{0}; i < std::size(scores); ++i) {
    std::cout << "Address: " << p_scores + i << " Value: " << *(p_scores + i) << std::endl;
  }

  return 0;
}