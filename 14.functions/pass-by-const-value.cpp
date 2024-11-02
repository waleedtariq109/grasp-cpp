#include <iostream>

static void sayAge(const int age) {
	//++age; // Compiler error
	std::cout << "age: " << age << std::endl;
}

static int passByConstInt() {

	int age{ 23 };

	sayAge(age);
}
