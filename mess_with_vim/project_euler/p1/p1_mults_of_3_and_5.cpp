#include <iostream>
int main() {
	int sum_3 = 0;
	int sum_5 = 0;
	int sum_15 = 0;

	for (int i = 0; i < 1000; i += 3) {
		sum_3 += i;
	}

	for (int i = 0; i < 1000; i += 5) {
		sum_5 += i;
	}
	for (int i = 0; i < 1000; i += 15) {
		sum_15 += i;
	}
	
	std::cout << sum_3 + sum_5 - sum_15 << std::endl;

}
