#include <iostream>
#include "Sally.h"
//operator overloading: telling c++ how to +, -, *, or / 
// with your self-defined functions


int main() {
	Sally sally1(34);
	Sally sally2(21);
	Sally sally3;

	sally3 = sally1 + sally2;
	std::cout << sally3.num << std::endl;
};
