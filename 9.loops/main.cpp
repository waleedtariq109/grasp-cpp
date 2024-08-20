#include <iostream>
#include <iomanip>

int main()
{
  // Nested loop
  std::cout << "Tabular Data Visualization with nested for loops" << std::endl;

  const size_t ROWS{12};
  const size_t COLS{3};

  size_t row{0};
  size_t cols{0};
  while (row < ROWS)
  {
    while (cols < COLS)
    {
      std::cout << "( row " << std::setw(2) << row << ", cols " << std::setw(2) << cols << " )";
      ++cols;
    }
    std::cout << std::endl;
    cols = 0;
    ++row;
  }

  // for (size_t row{0}; row < ROWS; ++row)
  // {
  //   for (size_t cols{0}; cols < COLS; ++cols)
  //   {
  //     std::cout << "( row " << std::setw(2) << row << ", cols " << std::setw(2) << cols << " )";
  //   }
  //   std::cout << std::endl;
  // }

  return 0;
}
