#include <iostream>
#include <string>
#include <cstring>

template <typename T>
T maximum(T val1, T val2) {
	return val1 > val2 ? val1 : val2;
}

template<>
const char* maximum<const char*>(const char* charPtr1, const char* charPtr2) {
	return std::strcmp(charPtr1, charPtr2) > 0 ? charPtr1 : charPtr2;
}

static int templateSpecialization() {
	int intVar1{ 98 };
	int intVar2{ 89 };
	
	double doubleVar1{ 87.98 };
	double doubleVar2{ 76.90 };

	std::string strVar1{ "Hello" };
	std::string strVar2{ "World" };

	auto maxInt = maximum(intVar1, intVar2); // int type deduced
	auto maxDouble = maximum(doubleVar1, doubleVar1); // double type deduced
	auto maxStr = maximum(strVar1, strVar2); // std::string type deduced

	std::cout << "maxInt: " << maxInt << std::endl;
	std::cout << "maxDouble: " << maxDouble << std::endl;
	std::cout << "maxStr: " << maxStr << std::endl;

	/*
		The upper code is working fine and compiled without any error we
		but there is one problem. If we pass array or pointer which both
		are similar becuase array decays into pointer so we are no longer
		comparing the value we are comparing the memory address and this
		behaviour might cause trouble so we need a way to tell compiler
		if these types of argument is passed then use this version of
		maximum function template. Like we have to create a different
		version of maximum function template and luckily C++ provide a
		way to do that through template specialzation.
	*/

	const char* char1{ "wild" };
	const char* char2{ "animal" };

	// NOTE: We pass the pointer so the comparison will perform on memory address not on value
	const char* maxChar = maximum(char1, char2);

	std::cout << "maxChar : " << maxChar << std::endl;

}
