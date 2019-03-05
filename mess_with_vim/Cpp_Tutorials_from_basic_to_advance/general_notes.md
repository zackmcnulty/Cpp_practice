### Compiling code
	g++ <file.cpp> -o executable_name
		*This is for fairly simple, one file projects. It compiles the given file
		into an executable which can be run with ./executable_name
	
	g++ file.cpp -c 
		* This creates an object file. Use this for some of your 
		auxillary files, you shouldnt need it for your main file

	g++ file1.o file2.o file3.o main.cpp -o executable_name
		* This allows you to compile lots of object files together.
		Officially called "linking", it joins lots of object files together
		into a runnable executable. The linker is called automatically
		using this format, so you wont have to deal with it personally
	

	TIPS:
		* You can quickly compile all .cpp files into object files using
		g++ *.cpp -c and then quickly link them all using
		g++ *.o -o executable_name


### Notes and stuff
* constructors/deconstructors are NOT inherited, but the parent constructor is run when the
child is created (as the child class might rely on some elements of parent constructor). If the
parent does not have a zero parameter constructor, you must explicitly call it.
	- child::child(int num) : parent(num) {}
	- parent constructor called first, parent deconstructor called last.
* virtual keyword is used for declaring abstract methods (i.e. that will be 
overidden in children) but allows us to call the method using a more general object.
	- i.e. function that may be overidden, but doesnt have to be.
	- pure virtual function -> virtual void func_name() = 0; MUST be overidden
* friend keyword allows classes to access each others protected variables/functions
