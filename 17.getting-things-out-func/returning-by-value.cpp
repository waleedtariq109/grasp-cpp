#include <iostream>
#include <string_view>

static std::string_view maxStr(const std::string_view param1, const std::string_view param2) {
	if (param1 > param2) {
		return param1;
	}
	else {
		return param2;
	}
}

static int maxInt(int param1, int param2) {
	if (param1 > param2) {
		return param1;
	}
	else {
		return param2;
	}
}

static double maxDouble(double param1, double param2) {
	if (param1 > param2) {
		return param1;
	}
	else {
		return param2;
	}
}

static int returnByValue() {
	std::string_view str1{ "Waleed Tariq" };
	std::string_view str2{ "Zeeshan Siddique" };

	int intVar1{ 87 };
	int intVar2{ 33 };

	double doubleVar1{ 837.38 };
	double doubleVar2{ 483.43 };

	std::string_view strOutput = maxStr(str1, str2);
	int intOutput = maxInt(intVar1, intVar2);
	double doubleOutput = maxDouble(doubleVar1, doubleVar2);

	std::cout << "strOutput: " << strOutput << std::endl;
	std::cout << "intOutput: " << intOutput << std::endl;
	std::cout << "doubleOutput: " << doubleOutput << std::endl;
}
