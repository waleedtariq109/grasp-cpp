#include <iostream>

static constexpr int getValue(int multiplier) {
	return 3 * multiplier;
}

static int constexprFunc() {
	// mark val1 as constexpr if we want to evaluated at compile time
	constexpr int val1 = getValue(4);
	std::cout << val1 << std::endl;

	int val2{ 8 };
	int result = getValue(val2);

	std::cout << result << std::endl;
}
