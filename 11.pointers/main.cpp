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
  return 0;
}