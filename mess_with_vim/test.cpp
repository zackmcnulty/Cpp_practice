#include <iostream>
#include <cstdlib>
using std::cout;
using std::endl;

// List available functions

namespace zack{
	int factorial(int n) {
		if (n == 0 or n == 1) {
			return n;
		} else {
			return n*factorial(n-1);
		}
	}
};
namespace mari{
	int factorial(int m) {
		return -1;
	}
};


int main(){
	
	cout<<"Hello World"<<endl;

	for (int i = 0; i < 10; i++){
		cout << i << endl;
	}
	int array[] = {1,2,3,4,5};
	for (int x : array){
		cout << x << endl;
	}
	//using name spaces... Differentiating between functions with same names
	//common libraries might use the same names, and you might want to define your
	//own version too! This keeps the compiler from getting confused
	using namespace zack;
	cout << factorial(5) << endl;
	
	cout << mari::factorial(5) << endl;

	

};
