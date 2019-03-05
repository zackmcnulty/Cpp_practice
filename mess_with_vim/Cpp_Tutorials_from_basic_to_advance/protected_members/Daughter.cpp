#include <iostream>
#include "Daughter.h"
using namespace std;

Daughter::Daughter(string next_name) : Mother(next_name) 
{
	
}


void Daughter::doSomething() {
	pub = 1; //throws no errors
	cout << pub << endl;

	prot = 5;
	cout << prot << endl;

	//priv = 7; //throws error
}
