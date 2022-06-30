// Cstring.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<crtdbg.h>
#include"Cstring.h"

using namespace std;

//Note: collect by reference and return by reference to avoid calls to copy ctor
// copy ctors are costly operations //deep copy
//Cstring& function(Cstring &ss)
//{
//	cout << "Function called" << endl;
//	return ss;
//}

int main()
{
	{
		Cstring s1("vinsys it services"); //compile time object 8 bytes 
		s1.displaystring();
		//function(s1);

		//Cstring s2('x', 10);
		//s2.displaystring();

		//Cstring s3;
		//s3.acceptstring();
		//s3.displaystring();

		//Cstring s4(s1);

		//s1.release();
		//Cstring* sptr = new Cstring;
		//sptr->displaystring();
		//delete sptr;
	}
	cout << "Leaks " << _CrtDumpMemoryLeaks() << endl;
	return 0;
}

