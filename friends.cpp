#include "A.h"
// friends.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class XYZ
{
	int x;
public: XYZ() :x(20) {}
	  void showx() { cout << x << endl; }
	  void foo(); 
	  void bar(); 
};

class ABC
{
	int a;
public: ABC() :a(10) {}
	  ABC::ABC(int)
	  {
	  }
	  void showa() { cout << a << endl; }
	  friend int main();
	  friend void function(); //friend function
	  //friend class XYZ; //friend class
	  friend void XYZ::foo();//particular member function could be friend 
	  friend void XYZ::bar();
};
void XYZ::foo()
{
	ABC a1; a1.a = 999; cout << a1.a << endl;
}
void XYZ::bar()
{ 
	ABC a1; a1.a = 888; cout << a1.a << endl; 
}

void function()
{
	ABC a1;
	a1.a = 88;
	cout << a1.a << endl;
	//cout << this << endl; //Global functions do not have this pointer!
	//cout << this->a << endl;
}
int main()
{
	XYZ x1;
	x1.foo();
	x1.bar();

	//ABC a1;
	//a1.showa();
	//function();
	//a1.a = 99;
	//cout << a1.a << endl;
	return 0;
}

