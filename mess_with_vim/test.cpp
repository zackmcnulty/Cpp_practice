#include <iostream>
#include <cstdlib>
using std::cout;
using std::endl;

// List available functions
int multiply(int array[], int size);



int main(){
	
	cout<<"Hello World"<<endl;

	for (int i = 0; i < 10; i++){
		cout << i << endl;
	}
	int array[] = {1,2,3,4,5};
	for (int x : array){
		cout << x << endl;
	}
	cout << "function time" << endl;

	cout << multiply(array, 5) << endl;

};

int multiply(int array[], int size){
	int product = 1;
	for (int i = 0; i < size; i++){
		product *= array[i];
	}
	return product;
}
