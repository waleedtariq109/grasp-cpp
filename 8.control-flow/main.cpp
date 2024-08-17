#include <iostream>

int main()
{
  const int Eraser{1};
  const int Pen{2};
  const int Marker{3};

  const int tool = Marker;

  switch (int strength{20}; tool)
  {
  case Eraser:
    std::cout << "Your Tool is Eraser " << strength << std::endl;
    break;
  case Pen:
    std::cout << "Your Tool is Pen " << strength << std::endl;
    break;
  case Marker:
    std::cout << "Your Tool is marker " << strength << std::endl;
    break;
  default:
    std::cout << "You have no matching tool" << std::endl;
    break;
  }

  return 0;
}
