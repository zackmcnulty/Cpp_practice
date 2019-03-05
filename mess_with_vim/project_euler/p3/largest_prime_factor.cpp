#include <iostream>
#include <cmath>



int main() {
	uint64_t num = 600851475143;
	int root = sqrt(num);

	// get all the primes
	int capacity = 100000;
	int primes[capacity];
	memset(primes, 0, capacity*sizeof(int));
	int size = 0;
	int max = 0;
	for (int i = 3; i <= root; i+=2) {
		bool is_prime = true;
		for (int j = 0; j < size; j++) {
			if (i % primes[j] == 0) {
				is_prime = false;
				break;
			}
		}
		if (is_prime){
			if (num % i == 0) {
				max = i;
			}
			primes[size] = i;
			size++;
		}
	}
	std::cout << max << std::endl;
};
