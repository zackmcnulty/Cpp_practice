#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>
// need to import all the objects we are going to be using
#include "Birthday.h"
using namespace std;
class People 

{
	public:
		People(string name, Birthday bdObj);
		void printInfo();
	private:
		string name;
		Birthday dateOfBirth;
};

#endif
