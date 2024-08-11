#include <iostream>
#include <cmath>

int main()
{
  // Math function
  double weight{7.7};

  std::cout << "The floor value of " << weight << " is " << std::floor(weight) << std::endl;
  std::cout << "The ceil value of " << weight << " is " << std::ceil(weight) << std::endl;

  double savings{-5000};

  std::cout << "Absolute of weight is " << std::abs(weight) << std::endl;
  std::cout << "Absolute if savings is " << std::abs(savings) << std::endl;

  // exp -> e ^ x, where e = 2.71828. So which means exp -> 2.71828^x
  double exponential = std::exp(10);
  std::cout << "The exponential of 10 is " << exponential << std::endl;

  double value_of_exponential{2.71828};
  std::cout << value_of_exponential << " ^ " << 10 << " is " << std::pow(value_of_exponential, 10) << std::endl;

  return 0;
}
