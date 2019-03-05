#include <iostream>

int main(){
	int num = 20;
	for (int i = 1; i <= 20; i++) {
		if (num % i != 0) {
			i = 1;
			num += 20;
		}
	}	
	std::cout << num << std::endl;
};
