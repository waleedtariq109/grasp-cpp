#include <iostream>
#include <iomanip>

int main()
{
  // Nested loop

  const size_t ROWS{12};
  const size_t COLS{3};

  std::cout << "Tabular Data Visualization with nested do while loops" << std::endl;

  size_t row{0};
  size_t col{0};
  do
  {
    do
    {
      std::cout << "( row " << std::setw(2) << row << ", cols " << std::setw(2) << col << " )";
      ++col;
    } while (col < COLS);
    std::cout << std::endl;
    col = 0;
    ++row;
  } while (row < ROWS);

  std::cout << std::endl;
  std::cout << "Tabular Data Visualization with nested while loops" << std::endl;

  size_t rows{0};
  size_t cols{0};
  while (rows < ROWS)
  {
    while (cols < COLS)
    {
      std::cout << "( row " << std::setw(2) << rows << ", cols " << std::setw(2) << cols << " )";
      ++cols;
    }
    std::cout << std::endl;
    cols = 0;
    ++rows;
  }

  std::cout << std::endl;
  std::cout << "Tabular Data Visualization with nested for loops" << std::endl;
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
