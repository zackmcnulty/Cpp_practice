#include <iostream>

template <class T>

class Bucky {
	T first, second;
	public:
	Bucky(T a, T b){
		first = a;
		second = b;
	}
	T bigger();
};

template <class T>

T Bucky<T>::bigger(){
	return (first >second? first:second);
}

int main() {
	Bucky<int> bk(10,20);
	std::cout << bk.bigger() << std::endl;
};
