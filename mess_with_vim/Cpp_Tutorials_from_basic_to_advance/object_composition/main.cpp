#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;

int main(){
	Birthday bdObj(2,19,1998);

	People zack("zack", bdObj);
	zack.printInfo();
};
