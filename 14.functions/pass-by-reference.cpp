#include <iostream>

static void Increment(int& value) {
	++value;
}

static int passByRef() {
	int num{ 99 };
	std::cout << "num: " << num << std::endl;
	Increment(num);
	std::cout << "num: " << num << std::endl;
	/*
		Pass by reference which means the value param is only the alias
		of num. So if we modify the value param it will also effect the
		num variable
	*/
}
