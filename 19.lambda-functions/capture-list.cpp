#include <iostream>

static int captureList() {
	/*
		We cannot access the global/parent scope variables in lambda
		so in order to access we have to specify them in a capture
		list.
	*/

	int outerVar{ 5 };
	auto func = [outerVar]() {
		std::cout << "lanbda function (capture list: value): " << outerVar << std::endl;
	};
	auto func1 = [&outerVar]() {
		std::cout << "lanbda function (capture list: reference): " << outerVar << std::endl;
		};
	for (size_t i{ 0 }; i < 5; ++i) {
		func();
		++outerVar;
		/*
			The outerVar is incremented but it will be incremented in the lambda
			function because we specify as a value in capture list
		*/
	}

	std::cout << std::endl;
	std::cout << "------------------" << std::endl;
	std::cout << std::endl;

	for (size_t i{ 0 }; i < 5; ++i) {
		func1();
		++outerVar;
		/*
			The outerVar is incremented and it will also be changes in lambda function
			because we specify this in capture list as a reference
		*/
	}
}
