#include <iostream>

/*
Okay there is no special syntax for passing a reference to a function so 
compiler will not decide like we are trying to call the reference one or 
the value one because the syntax is indentical for both

Like this

sayMyName(name);
sayMyName("Hello");

There is no differentiator if we are trying to call reference one or the value one.

The possible solution is to remove one function from our program xD

Also there is one more thing is the string literals are not working with
the non const reference
*/

static void sayMyName(std::string& name) {
	std::cout << "You name is (ref param): " << name << std::endl;
}

//static void sayMyName(std::string name) {
//	std::cout << "You name is (value param): " << name << std::endl;
//}

static int overloadingByReference() {
	std::string name{ "Waleed Tariq" };
	sayMyName(name);
}
