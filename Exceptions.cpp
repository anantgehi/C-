// Exceptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<crtdbg.h>
//#include<setjmp.h> //C language


using namespace std;

//jmp_buf myvar;

class Base
{
public: Base() { cout << "Ctor base" << endl; }
	  ~Base() { cout << "Dtor base" << endl; }

};
class Derived:public Base
{
public: Derived() { cout << "Ctor der" << endl; }
	  ~Derived() { cout << "Dtor der" << endl; }

};
//exception specification!
float divide(int num, int den)throw (float,const char*)
{
	Derived d1;
	Derived *dptr=new Derived;

	try
	{
		if (den == 0)
		{
			//longjmp(myvar, -1);
			throw - 1;
			//throw "exception has occured!";
			//throw 3.412;
			//delete dptr; //duplicate clean up code for exceptional path
			//throw d1;
		}
		if (den == 1)
		{
			delete dptr;//duplicate clean up code for exceptional path
			throw d1;
		}
	}
	catch (int)
	{
		cout << "inner catch int caught" << endl;
		throw; //rethrowing exception //will take your control to matching outer catch block!
	}
	cout << "Normal path should not be executed!" << endl;
	delete dptr; //normal path
	dptr = nullptr;
	return num / static_cast<float>(den);
}


int main()
{
	//code which is likely to throw exception is enclosed in setjmp(jmp_buff)
	//if (setjmp(myvar) == 0)
	try
	{
		cout << divide(10, 0) << endl;
	}
	//else
	catch(int &errnu)
	{
		cout << "outer catch int caught!" << endl;
		cout << "Divide by zero exception has occured!" << endl;
	}
	catch (const char* errname)
	{
		cout << errname << endl;
	}
	catch (Derived& d1)
	{
		cout << "Catch of Derived" << endl;
	}
	catch (Base& b)
	{
		cout << "Catch of Base" << endl;
	}
	catch (...)
	{
		cout << "Universal catch block" << endl;
	}
	return 0;
}
