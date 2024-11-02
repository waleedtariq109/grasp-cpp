#include <iostream>

static void sayAge(const int* const age) {
	//++(*age); // Compiler Error becuase it's a pointer to const

	int age1 = 98;
	//age = &age1; // Compiler Error because it's a const pointer
	std::cout << "age: (function) " << *age << std::endl;
}

static int constPtrToConst() {
	int age{ 23 };
	std::cout << "age: (before): " << age << std::endl; // 23
	sayAge(&age); // pass the pointer										// 23
	std::cout << "age: (after): " << age << std::endl;	// 23
}
