#include <iostream>
#include <string>

static int sizeAndCapacity() {
	std::cout << std::endl;

	std::cout << "std::string size and capacity" << std::endl;
	
	/*
		In C++ we have few methods which standard library gives us
		to check the length of a string or to check if string is empty
		or also we can also check the size of a string

		NOTE: The length and size function are doing the pretty much
		same thing they both eventually returns the total characters
		of the string.
	*/

	std::string str1{ "Hello World" };
	std::string str2{};
	std::string str3;

	// .empty()
	std::cout << std::endl;
	std::cout << "std::string::empty()" << std::endl;
	
	std::cout << "str1 is empty: " << std::boolalpha << str1.empty() << std::endl;
	std::cout << "str2 is empty: " << std::boolalpha << str2.empty() << std::endl;
	std::cout << "str3 is empty: " << std::boolalpha << str3.empty() << std::endl;

	// .size()
	std::cout << std::endl;
	std::cout << "std::string::size()" << std::endl;

	std::cout << "str1 contains: " << str1.size() << " character's" << std::endl;
	std::cout << "str2 contains: " << str2.size() << " character's" << std::endl;
	std::cout << "str3 contains: " << str3.size() << " character's" << std::endl;

	// .length()
	std::cout << std::endl;
	std::cout << "std::string::length()" << std::endl;

	std::cout << "str1 contains: " << str1.length() << " character's" << std::endl;
	std::cout << "str2 contains: " << str2.length() << " character's" << std::endl;
	std::cout << "str3 contains: " << str3.length() << " character's" << std::endl;

	/*
		We can also check how many characters std::string can holds by calling
		max_size on std::string
	*/
	
	std::cout << std::endl;
	std::cout << "std::string can holds upto: " << str1.max_size() << " character's" << std::endl;

	/*
		We can also check how much capacity we have left by calling capacity method
		and if string is greater then capacity then the the std::string will allocate
		more memory based on the size of characters upto max_size
	*/

	std::cout << std::endl;
	std::string str4{ "Hello there" };
	std::string str5;

	std::cout << "str4 capacity: " << str4.capacity() << std::endl;
	std::cout << "str5 capacity: " << str5.capacity() << std::endl;

	str4 = "The sky is blue. The grass is green. The kids are running are over the place";
	std::cout << "str4 capacity: " << str4.capacity() << std::endl;
	std::cout << std::endl;

	/*
		We can also expand the default capacity by calling the reserve method
	*/

	std::string str6{ "Hello World" };
	std::cout << "str6: " << str6 << std::endl;
	std::cout << "str6 capacity: " << str6.capacity() << std::endl;
	std::cout << "str6 size: " << str6.size() << std::endl;
	std::cout << std::endl;

	str6.reserve(100); // Increasing the capacity to 100

	std::cout << "str6 after reserve: " << str6 << std::endl;
	std::cout << "str6 capacity after reserve: " << str6.capacity() << std::endl;
	std::cout << "str6 size after reserve: " << str6.size() << std::endl;
	std::cout << std::endl;

	// shrink_to_fit
	std::string str7{ "Hello World" };
	str7.reserve(100);

	std::cout << "str7 capacity: " << str7.capacity() << std::endl;
	std::cout << "str7 size: " << str7.size() << std::endl;

	str7.shrink_to_fit();

	std::cout << "str7 capacity: " << str7.capacity() << std::endl;
	std::cout << "str7 size: " << str7.size() << std::endl;



	std::cout << std::endl;
	return 0;
}
