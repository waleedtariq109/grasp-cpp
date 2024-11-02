#include <iostream>
#include "compare.h" // preprocessor
#include "operations.h" // preprocessor

static int Linker() {
	int num1 = 65;
	int num2 = 76;

	int max = Maximum(num1, num2);
	int min = Minimum(num1, num2);
	int incMul = IncrementMultiply(num1, num2);

	std::cout << "max: " << max << std::endl;
	std::cout << "min: " << min << std::endl;
	std::cout << "Inc Mul: " << incMul << std::endl;
}
