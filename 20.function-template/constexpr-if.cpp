#include <iostream>
#include <type_traits>

static void isFloat(double param) {
	std::cout << param << " is floating point number." << std::endl;
}

static void isInteger(int param) {
	std::cout << param << " is interger." << std::endl;
}

template <typename T>
void func(T param) {
	if constexpr (std::is_integral<T>::value) {
		isInteger(param);
	}
	else if constexpr (std::is_floating_point<T>::value) {
		isFloat(param);
	}
	else {
		static_assert(std::is_integral<T>::value || std::is_floating_point<T>::value, "Arguments must is integer or floating point number");
	}
}

static int constexprIf() {
	int val1 = 87;
	double val2 = 87.78;

	func(val1);
	func(val2);
	func(87.99f);
	//func("H"); // Compiler error

}
