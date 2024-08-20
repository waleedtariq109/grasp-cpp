#include <iostream>
#include <iomanip>

int main()
{
  // Nested loop
  std::cout << "Tabular Data Visualization with nested for loops" << std::endl;

  const size_t ROWS{12};
  const size_t COLS{3};

  for (size_t row{0}; row < ROWS; ++row)
  {
    for (size_t cols{0}; cols < COLS; ++cols)
    {
      std::cout << "( row " << std::setw(2) << row << ", cols " << std::setw(2) << cols << " )";
    }
    std::cout << std::endl;
  }

  return 0;
}
