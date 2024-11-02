#include <iostream>

template <typename T>
T maximumByValue(T param1, T param2);

template <typename T>
T& maximumByReference(T& param1, T& param2);

static int paramByRefToTemplateFunction() {
	double val1{ 87.99 };
	double val2{ 76.98 };

	std::cout << "&val1: " << &val1 << std::endl;
	auto result = maximumByValue(val1, val2); // pass param by reference

	std::cout << std::endl;

	std::cout << "result: " << result << std::endl;

	std::cout << std::endl;

	std::cout << "&val2: " << &val2 << std::endl;
	auto result1 = maximumByReference(val1, val2);

	std::cout << std::endl;

	std::cout << "result1: " << result1 << std::endl;

}

template <typename T>
T maximumByValue(T param1, T param2) {
	/*
		Receiving the param as value so the changes won't effect the
		original variable.
	*/
	std::cout << "&param1: " << &param1 << std::endl;
	if (param1 > param2) {
		return param1;
	}
	else {
		return param2;
	}
}

template <typename T>
T& maximumByReference(T& param1, T& param2) {
	/*
	* Receiving the param as reference so any change in this function
	* template will effect the original variable
	*/
	std::cout << "&param1: " << &param1 << std::endl;
	if (param1 > param2) {
		return param1;
	}
	else {
		return param2;
	}
}
