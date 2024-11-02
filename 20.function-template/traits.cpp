#include <iostream>
#include <type_traits>

template <typename T>
void printInteger(T value) {
	static_assert(std::is_integral<T>::value, "printInteger() only be called with integer aruments");
	std::cout << "value: " << value << std::endl;
}

static int typeTraits() {
	int a = 8;
	float b = 87.9f;

	auto fn = []<typename T>(T param) {
		static_assert(std::is_floating_point<T>::value, "fn lambda only with called with floating point");
		std::cout << param << std::endl;
	};

	fn(89.9);

	printInteger(a);

}
