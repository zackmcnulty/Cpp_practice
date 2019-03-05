#include <iostream>
using std::cout;
using std::endl;

// This defines a generic type, which we can use in any of our methods
// as long as the operations in those methods are defined for that type
// Can use operator overloading to make certain objects behave
template <class E>

E add_stuff(E first, E second) {
	return first + second;
}


int main(){
	cout << add_stuff(10, 1) << endl;
	cout << add_stuff(1.1, 2.2) << endl;
	// This will throw error as type of 1 and 1.5 do not match
	// cout << add_stuff(1, 1.5) << endl;
};
