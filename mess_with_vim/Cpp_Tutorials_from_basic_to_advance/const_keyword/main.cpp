#include <iostream>
#include <cstdlib>
#include "Sally.h"
using namespace std;
int main() {

	Sally sallyObject;
	// I can call a normal method from a normal object
	sallyObject.printCrap();

	const Sally sallyConst;

	sallyObject.printConst();

};
