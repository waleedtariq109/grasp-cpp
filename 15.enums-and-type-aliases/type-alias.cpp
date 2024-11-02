#include <iostream>

typedef unsigned long long int LongInt; // Old Way
using LongInt1 = unsigned long long int; // Modern C++ Way

static int typeAlias() {
	unsigned long long int largeNum{37498728};
	LongInt largeNum1{ 44324938 };
	LongInt1 largeNum2{ 332489327 };

	std::cout << "largeNum: " << largeNum << ", sizeof(largeNum): " << sizeof(largeNum) << std::endl;
	std::cout << "largeNum1: " << largeNum1 << ", sizeof(largeNum1): " << sizeof(largeNum1) << std::endl;
	std::cout << "largeNum2: " << largeNum2 << ", sizeof(largeNum2): " << sizeof(largeNum2) << std::endl;

}
