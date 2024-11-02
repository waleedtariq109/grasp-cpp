#include <iostream>

static int* maxReturnPtr(int* param1, int* param2) {
	if (*param1 > *param2) {
		return param1;
	}
	else {
		return param2;
	}
}

static int* localPtrReturn(int a, int b) {
	int result = a + b;
	return &result;
}

static int returnByPtr() {
	int x{ 9 };
	int y{ 10 };

	std::cout << "Before function call" << std::endl;
	std::cout << "x: " << x << std::endl;
	std::cout << "y: " << y << std::endl;

	int* maxPtr = maxReturnPtr(&x, &y);

	std::cout << std::endl;
	std::cout << "*maxPtr: " << *maxPtr << std::endl;
	std::cout << "After function call" << std::endl;
	std::cout << "x: " << x << std::endl;
	std::cout << "y: " << y << std::endl;

	++(*maxPtr);
	std::cout << "y: " << y << std::endl;

	std::cout << std::endl;

	int* localPtr = localPtrReturn(x, y);

	std::cout << "localPtr: " << *localPtr << std::endl; // Getting the invalid address or garbage value

	/*
		The reason is we will return a ptr which in local scope of localPtrReturn
		function so when this function is pop out from the call stack then the
		pointer which we returned is no longer in the memory so the localPtr is now
		pointing to invalid memory address or some random memory address
	*/

}
