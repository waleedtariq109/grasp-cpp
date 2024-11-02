#include <iostream>

static void printSum(int param1, int param2) {
	int sum = param1 + param2;

	std::cout << "sizeof(param1): " << sizeof(param1) << std::endl;
	std::cout << "sizeof(param2): " << sizeof(param2) << std::endl;

	std::cout << "sum: " << sum << std::endl;
}

static int implicitConversion() {
	int a{ 22 };
	int b{ 87 };

	double x{ 93.4 };
	double y{ 82.98 };

	printSum(a,b);  // Compiler will not do implicit conversion
	printSum(x, y); // Compiler will implicit convert into int
}
