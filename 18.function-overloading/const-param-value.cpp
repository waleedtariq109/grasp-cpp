#include <iostream>

/*
	We will get an compiler error because even tough in function we
	receive param as a const param but if we look closely then they are
	just a copy and both function won't effect the original variable
	that's why we will get an compiler error
*/

//static int max(int a, int b) {
//	return a > b ? a : b;
//}

static int max(const int a, const int b) {
	return a > b ? a : b;
}

static int constParamValue() {
	int x{ 9 };
	int y{ 8 };

	int result = max(x, y);

	std::cout << "result: " << result << std::endl;

}
