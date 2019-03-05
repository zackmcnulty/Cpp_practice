#include <iostream>

using std::cout;
using std::endl;

// we have two different data types, FIRST  and SECOND, but we do not know what it will be
template <class FIRST, class SECOND>

// NOTE: return type will be same as type of first parameter
// How do we make it be the more general type?
FIRST smaller(FIRST a, SECOND b) {
	return (a<b? a:b);
}

int main(){

	cout << smaller(5,7)  << endl;

	cout << smaller(5.5,7)  << endl;
	cout << smaller(5,7.5)  << endl;

	cout << smaller(15,7.5)  << endl;
};
