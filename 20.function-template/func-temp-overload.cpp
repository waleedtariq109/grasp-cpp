#include <iostream>
#include <cstring>

template <typename T>
T maximum(T val1, T val2) {
	std::cout << "Function Template" << std::endl;
	return val1 > val2 ? val1 : val2;
}

static const char* maximum(const char* val1, const char* val2) {
	std::cout << "Raw Function" << std::endl;
	return std::strcmp(val1, val2) > 0 ? val1 : val2;
}

template <typename T>
T* maximum(T* val1, T* val2) {
	std::cout << "Function Template with pointers parameter" << std::endl;
	return *val1 > *val2 ? val1 : val2;
}

static int templateOverload() {
	const char* cStr1{ "Wild" };
	const char* cStr2{ "Animal" };

	int intVar1{ 55 };
	int intVar2{ 98 };

	const char* cStrResult = maximum(cStr1, cStr2);
	std::cout << "cStrResult: " << cStrResult << std::endl;

	std::cout << std::endl;

	auto res1 = maximum(intVar1, intVar2);
	std::cout << "res1: " << res1 << std::endl;

	std::cout << std::endl;

	auto res2 = maximum(&intVar1, &intVar2);
	std::cout << "res2: " << *res2 << std::endl;
}
