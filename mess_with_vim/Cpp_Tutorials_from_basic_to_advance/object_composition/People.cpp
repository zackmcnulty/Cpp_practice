#include <iostream>
#include "People.h"
#include "Birthday.h"
#include <string>

using namespace std;


People::People(string name, Birthday bdObj) 
:name(name), dateOfBirth(bdObj)
{
	cout << "zack was born..." << endl;
}

void People::printInfo() {
	cout<< name << " was born on ";
	dateOfBirth.printDate();
}
