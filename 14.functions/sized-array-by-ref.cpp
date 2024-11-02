#include <iostream>

static double arraySum(const double(&arr)[10]) {
	double sum{};
	for (size_t i{ 0 }; i < std::size(arr); ++i) {
		sum += arr[i];
	}
	return sum;
}

static int sizedArrayRef() {
	double array[]{ 2.22,3.44,3.44,6.55,45.5,4.76,55.6,15.75,7.88,54.4 };
	double result = arraySum(array);

	std::cout << "result: " << result << std::endl;

}
