#include <iostream>
#include <cstdlib>
#include "Sally.h"
using namespace std;
int main() {

	Sally sallyObject;
	Sally* sallyPointer = &sallyObject

	sallyObject.printCrap();

	// arrow member operator (->) is for accessing elements of
	// an object using a pointer rather than the object itself
	sallyPointer -> printCrap();
};
