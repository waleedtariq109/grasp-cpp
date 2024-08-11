#include <iostream>

const int val1{33};
constexpr int val2{34};
int val3{35};

constinit int age = 88;
const constinit int age1{val1};
constinit int age2{age1};

const constinit double weight{23.4};

int main()
{
  // constinit
  return 0;
}
