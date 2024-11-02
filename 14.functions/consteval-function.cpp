#include <iostream>

static consteval int getValue(int multiplier) {
	return 3 * multiplier;
}

static int constEvalFunction() {
	/*
	* consteval function garauntee that function will evaluated at compile-time
	*/

	// mark val1 as constexpr if we want to evaluated at compile time
	constexpr int val1 = getValue(3);
	std::cout << val1 << std::endl;

	// This below code throw's compiler error becausewe passing the val2
	// as a param and it could be dynamic or change at runtime that's why
	// it will gives an compiler error becuase consteval garauntee to be
	// evaluated at runtime and val2 could be change so it can't be evaluated
	// at compile time
	/*
	int val2{ 8 };
	int result = getValue(val2);
	std::cout << result << std::endl;
	*/
}
