#include <iostream>
#include "Birthday.h"
using namespace std;

Birthday::Birthday(int month, int day, int year)
: day(day), month(month), year(year)
{
	cout << "I am alive!!!" << endl;
}

void Birthday::printDate() {
	cout << month << "/" << day << "/" << year << endl;
}
