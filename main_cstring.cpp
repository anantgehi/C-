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

/*
int& function(int& x)
{
	return x;
}
*/
int main()
{
	{
		//int xx = 100;
		//function(xx) = 99;
		//cout << xx << endl;

		Cstring s1("vinsys it services"); //compile time object 8 bytes 
		s1.displaystring();
		//Cstring s2 = s1; //copy ctor
		Cstring s2("india");
		//Cstring s3=s1+s2;//s1.operator+(s2);
		Cstring s3;
		s1+= "dubai"; //s3.operator+=("dubai");

		cout << s1[0] << endl;//s1.operator[](0)
		s1[0] = 'Q';
		s1.displaystring();

		//s3 = s2 = s1; 
		//s3.operator=(s2.operator=(s1));
		//s1 = s1;
		//s1.displaystring();
		//s2.displaystring();
		s1.displaystring();//23 vinsys it servicesindia

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

