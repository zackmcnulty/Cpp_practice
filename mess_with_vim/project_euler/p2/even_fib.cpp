#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
int main() {
	int fib[2] = {1,1};
	int next = 2;
	int sum = 0;
	int i = 0;
	while (next  < 4 * pow(10,6)) {
		if (next % 2 == 0) {
			sum += next;
		}
		fib[i] = next;
		next = fib[0] + fib[1];
		i = (i == 0 ? 1:0);
	}
	cout << sum << endl;
};
