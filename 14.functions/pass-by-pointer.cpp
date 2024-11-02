#include <iostream>

static void sayAge(int* age) {
	++(*age);
	std::cout << "age: (function) " << *age << std::endl;
}

static int passByPointer() {
	int age{ 23 };
	std::cout << "age: (before): " << age << std::endl; // 23
	sayAge(&age); // pass the pointer										// 24
	std::cout << "age: (after): " << age << std::endl;	// 24
}
