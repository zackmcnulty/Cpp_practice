
// If my header file is not already defined, define it as I do below
#ifndef SALLY_H
#define SALLY_H

class Sally
{
	// defines what methods this class has available, and how their use
	// is restricted
	public:
		Sally(int a, int b);
		void printCrap();	
		~Sally(); //deconstructor
		void printConst() const; //has to be declared in prototype file too
		void print();
	private:
		int regVar; 
		const int constVar; // cannot be changed!
};

#endif //ends if statement from above
