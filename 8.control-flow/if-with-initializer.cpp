#include <iostream>

int main()
{
  constexpr bool go{false};

  if constexpr (int speed{34}; go)
  {
    if (speed > 20)
    {
      std::cout << "Slow Down" << std::endl;
    }
    else
    {
      std::cout << "You are going at " << speed << " which is good" << std::endl;
    }
  }
  else
  {
    std::cout << "You cannot go" << std::endl;
    std::cout << "Speed: " << speed << std::endl;
  }

  return 0;
}
