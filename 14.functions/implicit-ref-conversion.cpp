#include <iostream>

static void printValue(const int& param) {
	std::cout << "value: " << param << std::endl;
}

static void increment(int& param) {
	++param;
	std::cout << "increment: " << param << std::endl;
}

static int implicit() {
	double variable{ 22.44 };
	int var1{ 33 };

	printValue(variable);
	//increment(variable); // Compiler: We cannot pass double to non const reference
	increment(var1);
}
