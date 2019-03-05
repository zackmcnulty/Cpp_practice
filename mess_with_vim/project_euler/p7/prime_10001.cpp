#include <iostream>

int main(){
	int primes[10001] = {2};
	int size = 1;
	int next = 3;
	while (size < 10001) {
		bool is_prime  = true;
		for (int i = 0; i < size; i++) {
			if (next % primes[i] == 0) {
				is_prime = false;
				break;
			}
		}
		if (is_prime) {
			primes[size] = next;
			size++;
		
		}
		next += 2;
	}
	std::cout << primes[10000] << std::endl;


};
