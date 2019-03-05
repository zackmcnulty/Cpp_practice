#include <iostream>
#include <string>
#include "Mother.h"
using namespace std;

Mother::Mother(string name)
:name(name)
{


}

void Mother::sayName(){
	cout << "my name is " << name << endl;
}


