#include <iostream>

/*
	While defining the prototype the param name's are not required
*/

static int Max(int, int); // Function Declaration or Prototype.

static int Prototype() {
	std::cout << "Function Declaration and Defination" << std::endl;

	int a = 20;
	int b = 44;

	int result = Max(a, b);
	std::cout << "result: " << result << std::endl;

}

// Function defination or reference
static int Max(int num1, int num2) {
	if (num1 > num2) {
		return num1;
	}
	else {
		return num2;
	}
}
