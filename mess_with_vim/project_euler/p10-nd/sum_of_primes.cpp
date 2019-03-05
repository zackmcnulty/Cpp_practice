#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int primes[1000000] = {2};
	int size = 1;
	int cur = 3;
	int sum = 2;
	while (cur < 2*pow(10,6)) {
		bool is_prime = true;
		for (int i = 0; i < size; i++) {
			if (cur % primes[i] == 0) {
				is_prime = false;
				break;
			}
		}
		if (is_prime) {
			cout << cur << endl;
			primes[size] = cur;
			sum += cur;
			size++;
		}
		cur += 2;
	}
	cout << sum << endl;
};
