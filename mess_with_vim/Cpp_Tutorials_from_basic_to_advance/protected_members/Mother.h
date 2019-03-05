#ifndef MOTHER.H
#define MOTHER.H

using std::string;
class Mother{

	public: // can be accessed from outside the class
		Mother(string name);
		void sayName();
		int pub;
	private: // can only be accessed from within the class
		string name;
		int priv;
	protected: // can be accessed from within class, from friends, and child classes (thru inheritance)
		int prot;
}; 

#endif
