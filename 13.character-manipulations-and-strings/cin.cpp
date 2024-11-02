#include <iostream>

// Change back to main
static int cinObject() {
	std::cout << "Cin Object, cin.get(), cin.getLine()" << std::endl;
	/*
		The cin Objects takes an string input from user without
		any space. If cin encounter any space it will ignore the
		string after space and the string before will be used
	*/
	
	std::string name;
	std::cout << "Enter your name: ";
	std::cin >> name;
	std::cout << "Your name is: " << name << std::endl;

	/*
		The cin.getline() will take inputs with sapces
	*/

	char address[100]{};
	std::cout << "Enter your address";
	std::cin.getline(address, 100);
	std::cout << "Your address is: " << address << std::endl;

	return 0;
}
