#ifndef DAUGHTER.H
#define DAUGTHER.H

#include "Mother.h"
using std::string;
class Daughter: public Mother 
{ //inherits all the stuff from Mother class
	
	public:
		Daughter(string name);
	private:
		string name;
};


#endif
