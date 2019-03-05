#include <iostream>
#include <cmath>
using namespace std;

int main(){
	for (int a = 1; a < 999; a++) {
		for (int b = 1; b < 999 - a; b++) {
			int c = 1000 - b - a;
			if (pow(a,2) + pow(b,2) == pow(c,2)) {
				cout << a << ',' << b << "," << c << endl;
				cout << a*b*c << endl;
				goto output;
			}
		}
	}

	output:
		cout << "done!";
}
