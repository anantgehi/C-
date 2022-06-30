#pragma once

// Mandatory Rule of 5
// Whenever you have any runtime attribute in your class
// 1. Destructor //To avoid memory leaks / close file pointers / database connections
// 2. Copy ctor // To avoid dangling pointer
// 3. assignment operator 
// 4. move ctor
// 5. move assingment operator
class Cstring
{
	char *m_pbuff; //raw pointer //dynamic attribute //runtime attribute
	int m_len;
public: Cstring();//default ctor
	    Cstring(const char*);
		Cstring(char, int);
		Cstring(const Cstring&); //reference is mandatory for copy ctors!
		void displaystring();
	    void acceptstring();
		void release();
		~Cstring();//destructor
};