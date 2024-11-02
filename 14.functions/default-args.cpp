#include <iostream>

static void compute(int = 23, double = 98.23, int = 2001);
//void compute(int age, double weight, int birthYear);

// Declaration with param name will also work

static int defaultParamValue() {
	compute();
}

void compute(int age, double weight, int birthYear) {
	std::cout << "age: " << age << std::endl;
	std::cout << "weight: " << weight << std::endl;
	std::cout << "birthYear: " << birthYear << std::endl;
}
