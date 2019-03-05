#include<iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::pow;
int main (){
	cout << pow(5,2);
	int square_sum = 0;
	for (int i = 1; i <= 100; i++){
		square_sum += pow(i,2);
	}
	cout << square_sum << endl;
	int sum_squared = pow(100*101/2,2);
	int diff = sum_squared - square_sum;
	cout <<  diff << endl;
};
