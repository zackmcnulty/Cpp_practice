#include "Sally.h"
#include <iostream>

using namespace std;

Sally::Sally() //constructor
{
	cout << "I am the constructor" << endl;
}

void Sally::printCrap(){
	cout << "is mayo an instrument?"<< endl;
}

// deconstructor; signaled with the ~
// can take no arguments and have no return; cant be overloaded either
// Run as the object is being deleted (i.e. when you reach the end of
// the program in main.cpp, as all objects are being destroyed)
// Used for memory clean up
Sally::~Sally() {
	cout << "And now i die..." << endl;

}
