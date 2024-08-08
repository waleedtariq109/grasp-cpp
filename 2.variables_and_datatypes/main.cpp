#include <iostream>

int main() {
  // Integers
  // Braced Initializers

  int elephant_count; // Variable may contain some random garbage value
  int lion_count {}; // Initialize with zero
  int dog_count {10};
  int cat_count {15};

  // We can also use arithmetic expression in as initializer
  int total_animal_count { dog_count + cat_count };

  std::cout << "Variable contain some garbage value: " << elephant_count << std::endl;
  std::cout << "Lion count: " << lion_count << std::endl;
  std::cout << "Dog count: " << dog_count << std::endl;
  std::cout << "Cat count: " << cat_count << std::endl;

  return 0;

}
