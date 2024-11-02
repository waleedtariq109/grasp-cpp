#include <iostream>

static int declaringLambda() {
	// Declare a lambda function and call it by name
	auto lambdaFunction = []() {
		std::cout << "Lambda function call it by name" << std::endl;
	};
	lambdaFunction();

	// Declare a lambda function and call it directly
	[]() {
		std::cout << "Lambda function call it directly" << std::endl;
	}();

	// Declare a lambda and with params
	[](int val1, int val2) {
		std::cout << "val1 + val2: " << val1 + val2 << std::endl;
	}(22,33);

	// Declare a lambda fucntion with return type
	auto result = [](int val1, int val2)->int {
		return val1 + val2;
	}(20,30);
	std::cout << "result: " << result << std::endl;
}
