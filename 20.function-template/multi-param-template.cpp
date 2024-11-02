#include <iostream>

/*
	We can have a function template where we can explicitly define the
	return type and different type of parameter.
*/

template <typename ReturnType, typename T, typename P>
ReturnType maximum(T param1, P param2) {
	return param1 > param2 ? param1 : param2;
}

static int multiParamTemplate() {
	int val1 = 98;
	int val2 = 67;

	// val1 and val2 could be of any datatype
	auto result = maximum<int>(val1, val2);

	std::cout << result << std::endl;

	/*
		The order of params in function template is matters so if the
		first typename is our return type then it should pass first in
		the angle bracket. Once we pass the return type then we can omit
		the other params type the compiler will deduce it automatically.

		possible class:
			maximum<int, double, int>(param1, param2)
			maximum<int, double>(param1, param2)
			maximum<int>(param1, param2)

			maximum(param1, param2) // Compiler error because we don't explicitly define the return type in angle bracket
	*/

}
