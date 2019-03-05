#include <iostream>
using namespace std;
int main(){

	char * str_ptr = "hello";

	while (*str_ptr != '\0'){
		cout << *str_ptr; 
		++str_ptr;
	}
	cout << endl;

};
