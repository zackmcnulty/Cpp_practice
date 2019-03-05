#ifndef SALLY.H
#define SALLY.H


class Sally 
{
	public:
		Sally();
		Sally(int num);
		Sally operator*(Sally other);
		Sally operator+(Sally other); // overloading the addition operator
		int num;

};

#endif
