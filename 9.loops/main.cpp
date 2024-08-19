#include <iostream>

int main()
{
  // Do While loops
  const size_t COUNT{10};
  size_t i{40}; // Iterator

  do
  {
    std::cout << "C++: THE GOAT LANGUAGE" << std::endl;
    ++i; // 41
  } while (i < COUNT);

  return 0;
}
