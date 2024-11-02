#include <iostream>

static void printSum(int* param1, int* param2) {
	std::cout << "sum: " << (*param1 + *param2) << std::endl;
}

static int ptrImplicitConversion() {
	int a{ 22 };
	int b{ 87 };

	double x{ 93.4 };
	double y{ 82.98 };

	printSum(&a, &b);
	//printSum(&x, &y); 
	// Compiler Error because we pass the address of double to int pointer because
	// we pass memory address that's why implicit conversion will happen.
	/*
		The other reason is that if the compiler, let's say, allows passing a double 
		pointer to an int pointer parameter and we perform pointer arithmetic, the 
		compiler won't know how many bytes to add, etc. That's why compiler will not
		allow this.
	*/
}
