// Cstring.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#pragma pack(1)
#include<crtdbg.h>
#include"Cstring.h"
#include"Date.h"
#include"smart.h"
#include"Employee.h"

using namespace std;

//Note: collect by reference and return by reference to avoid calls to copy ctor
// copy ctors are costly operations //deep copy

/*
Cstring function(Cstring ss)
{
	cout << "Function called" << endl;
	return ss;
}
*/
/*
int& function(int& x)
{
	return x;
}
*/

int main()
{
	{
		Employee e1(1000,"akshay",1,7,2022);
		//cout << sizeof(e1) << endl;
		e1.show();

		//Cstring s1;
		//cin >> s1; //operator >> (cin,s1);
		//cout << s1; //operator <<(cout,s1);

		//Cstring s1("Vinsys");
		//function(s1);

		
		//Cstring s1("vinsys it services"); //compile time object 8 bytes 
		//s1.displaystring();
		//Cstring s2 = s1; //copy ctor
		//Cstring s2("india");
		//Cstring s3=s1+s2;//s1.operator+(s2);
		//Cstring s3;
		//s3 = "us"; //s3.operator=("us")
		//s3.displaystring();

		//s1+= "dubai"; //s3.operator+=("dubai");

		//cout << s1[0] << endl;//s1.operator[](0)
		//s1[0] = 'Q';
		//s1.displaystring();
		
		//s3 = s2 = s1; 
		//s3.operator=(s2.operator=(s1));
		//s1 = s1;
		//s1.displaystring();
		//s2.displaystring();
		//s1.displaystring();//23 vinsys it servicesindia


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

		//SmartPointer sp1;
		//sp1->acceptstring();
		//sp1->displaystring();
		//SmartPointer sp2("vinsys");
		//sp2->displaystring();

	}
	cout << "Leaks " << _CrtDumpMemoryLeaks() << endl;
	return 0;
}

