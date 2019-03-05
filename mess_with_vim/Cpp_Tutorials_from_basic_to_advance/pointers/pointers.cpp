
#include <iostream>
#include <cstdlib>


int main(){

	std::cout << "Hi mom" << std::endl;
	int hello_mom = 6;

	using std::cout;
	using std::endl;
	int zack[5] = {1,2,3,4,5}; //make array of size 5

	int* zk0 = &zack[0]; // get pointer to first element in zack
	int* zk1 = &zack[1];
	int* zk2 = &zack[2];

	cout << "zk0 points to : " << zk0 << endl;
	cout << "zk1 points to : " << zk1 << endl;
	cout << "zk2 points to : " << zk2 << endl;
	//
	// operations on pointers change where they point
	// As this pointer is of type int, it moves the pointer
	// 2 * sizeof(int) in the positive direction
	// So if you have an array, it moves it two elements down
	// and now it points to same element as zk2
	zk0 += 2;
	cout << "zk0 now points to :" << zk0 << endl;
};
