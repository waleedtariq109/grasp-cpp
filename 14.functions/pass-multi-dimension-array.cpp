#include <iostream>


static double sumMultiDimensionalArray(const double arr[][3], size_t size) {
	double sum{};
	for (size_t i{ 0 }; i < size; ++i) {
		for (size_t j{ 0 }; j < 3; ++j) {
			sum += *(*(arr+i)+j);
		}
	}

	return sum;
}

static int mtdArray() {
	double multiDimensionalArray[][3]{
		{1.22,2.44,7.88},
		{9.8,8.6,47.8},
		{99.3,43.2,22.3}
	};

	double result{0};
	result = sumMultiDimensionalArray(multiDimensionalArray, std::size(multiDimensionalArray));

	std::cout << "result: " << result << std::endl;

}
