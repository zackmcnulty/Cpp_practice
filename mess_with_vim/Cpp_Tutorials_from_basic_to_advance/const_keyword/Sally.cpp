#include "Sally.h"
#include <iostream>

using namespace std;

Sally::Sally() //constructor
{
	cout << "I am the constructor" << endl;
}
// cannot call a none const method from a constant object
void Sally::printCrap(){
	cout << "is mayo an instrument?"<< endl;
}

// to declare a function const, put it right after the method name.
// A const function always has a const state across all instances of the object?
void Sally::printConst() const {
	cout << "i am the constant function" << endl;
}

Sally::~Sally() {
	cout << "And now i die..." << endl;
}

