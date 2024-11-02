#include <iostream>

/*
	We can also set auto as the return type in our
	function template.

	The rule is the biggest type which we pass as an argument
	will the the return type.
*/

template <typename T, typename P>
auto maximum(T a, P b) {
	return a > b ? a : b;
}

static int autoReturnType() {
	int a = 98;
	double b = 98.99;

	auto result = maximum(a, b); // Largest type will deduced as return type which in this case is double

	std::cout << "sizeof(result): " << sizeof(result) << std::endl;
	std::cout << "result: " << result << std::endl;

	char c = 'A';
	int d = 66;

	auto result1 = maximum(c, d);
	std::cout << "sizeof(result1): " << sizeof(result1) << std::endl;
	std::cout << "result1: " << result1 << std::endl;
}
