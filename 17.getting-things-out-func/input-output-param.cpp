#include <iostream>
#include <string_view>

static void maxStr(const std::string_view param1, const std::string_view param2, std::string_view& output) {
	if (param1 > param2) {
		output = param1;
	}
	else {
		output = param2;
	}
}

static void maxInt(int param1, int param2, int& output) {
	if (param1 > param2) {
		output = param1;
	}
	else {
		output = param2;
	}
}

static void maxDouble(double param1, double param2, double& output) {
	if (param1 > param2) {
		output = param1;
	}
	else {
		output = param2;
	}
}

static int RefPtrParam() {
	std::string_view str1{ "Waleed Tariq" };
	std::string_view str2{ "Zeeshan Siddique" };
	std::string_view strOutput;

	int intVar1{ 87 };
	int intVar2{ 33 };
	int intOutput{};

	double doubleVar1{ 837.38 };
	double doubleVar2{ 483.43 };
	double doubleOutput{};

	maxStr(str1, str2, strOutput);
	maxInt(intVar1, intVar2, intOutput);
	maxDouble(doubleVar1, doubleVar2, doubleOutput);

	std::cout << "strOutput: " << strOutput << std::endl;
	std::cout << "intOutput: " << intOutput << std::endl;
	std::cout << "doubleOutput: " << doubleOutput << std::endl;
}
