#include <iostream>
#include "Sally.h"
using std::cout;
using std::endl;
Sally::Sally() {

}

Sally::Sally(int num) 
: num(num)
{

}

//overload the addition operator
Sally Sally::operator+(Sally other){
	return Sally(num + other.num);
}

Sally Sally::operator*(Sally other){
	return Sally(num * other.num);
}
