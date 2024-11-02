#include <iostream>

static int captureAll() {
	// Capture everything by value in lambda function
	
	/*
		To capture everything by value we have to pass = in capture list
	*/

	int var1 = 98;
	auto result1 = [=]() {
		std::cout << "var1: (capture all by value) " << var1 << std::endl;
	};
	for (size_t i{ 0 }; i < 5; ++i) {
		result1();
		++var1;
	}

	std::cout << std::endl;

	/*
		To captur everything by reference we have to pass & in capture list
	*/
	int var2 = 76;
	auto result2 = [&]() {
		std::cout << "var2: (capture all by reference) " << var2 << std::endl;
	};
	for (size_t i{ 0 }; i < 5; ++i) {
		result2();
		++var2;
	}
}
