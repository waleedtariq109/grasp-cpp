#include <iostream>

/*
	void: The function with void type does not return anything
*/

static void enterBar(unsigned int age) {
	if (age >= 18) {
		std::cout << "You are " << age << " years old. You can proceed" << std::endl;
	}
	else {
		std::cout << "You cannot enter" << std::endl;
	}
}

static int Max(int num1, int num2) {
	if (num1 > num2) {
		return num1;
	}
	else {
		return num2;
	}

}

static void sayHello() {
	std::cout << "Hello" << std::endl;
}

static int Func() {
	enterBar(18);
	std::cout << std::endl;

	// Call function in loop
	for (size_t i{ 0 }; i < 20; ++i) {
		/*
			The reason we have to do the static case is because the size_t
			is the type defination on unsigned long but the param of enterBar
			expects int. So if we not statically cast the type of i then the
			compiler will implicitly conert the type.
		*/
		enterBar(static_cast<int>(i));
	}
	std::cout << std::endl;

	int result = Max(10,20);
	std::cout << "result: " << result << std::endl;

	std::cout << std::endl;

	sayHello();

	return 0;
}
