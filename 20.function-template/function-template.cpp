#include <iostream>

/*
	C++ provides function templates to avoid code repeatition.

	Function template is just a generic for the function and when
	we calling the function the compiler will generate the function
	code for us.

	template <typename T>: This line tells compiler that we are using
	function template and we are using T as a generic type which means
	the is replaced with whichever datatype we pass as an argument.

	Also we cannot pass different datatype to a function template

*/

template <typename T>
T maximum(T param1, T param2) {
	return param1 > param2 ? param1 : param2;
}

template <typename T>
T multiply(T value1, T value2) {
	return value1 * value2;
}

static int functionTemplate() {
	int intVar1{ 32 };
	int intVar2{ 87 };
	int intVar3{ 5 };
	int intVar4{ 5 };

	double doubleVar1{ 87.98 };
	double doubleVar2{ 87.97 };
	double doubleVar3{ 5.5 };
	double doubleVar4{ 5.5 };

	std::string stringVar1{ "Hello" };
	std::string stringVar2{ "World" };

	auto result1 = maximum(intVar1, intVar2);
	auto result2 = maximum(doubleVar1, doubleVar2);
	auto result3 = maximum(stringVar1, stringVar2);
	auto result4 = multiply(intVar3, intVar4);
	auto result5 = multiply(doubleVar3, doubleVar4);

	std::cout << "result1: " << result1 << std::endl;
	std::cout << "result2: " << result2 << std::endl;
	std::cout << "result3: " << result3 << std::endl;
	std::cout << "result4: " << result4 << std::endl;
	std::cout << "result5: " << result5 << std::endl;
}
