#include <iostream>
#include<crtdbg.h>

using namespace std;
class Base
{
public: virtual void foo() //virtual function!
		{
			cout << "foo base" << endl;
		}
	    
};
class Derived :public Base
{
public: virtual void foo()
		{
			cout << "foo derived" << endl;
		}
		void bar()
		{
		  cout << "bar dervied" << endl;
		}
};
class Derived1 :public Derived
{
public: //If you override a virtual function, the function becomes virtual by default
		// writing virtual keyword in derived class is optional!
		void foo()
		{	
			cout << "foo derived1" << endl;
		}
};
int main()
{
	/*
	Base b1;
	b1.foo();
	Derived d1;
	d1.foo();
	*/
	Base* bptr = new Derived;
	bptr->foo();//Note: Type of pointer will get higher priority than the object being refered to!
	//foo of base class
	//Runtime polymorphism can be achieved either by using typecasting or use virtual functions!
	//static_cast<Derived*>(bptr)->foo(); //call foo of derived
	//static_cast<Derived*>(bptr)->bar(); //non overridden function of derived class!
	//bptr->foo();
	static_cast<Derived*>(bptr)->bar();

	//Derived* dptr = new Base;
	bptr = new Derived1;
	bptr->foo(); //foo of new derived1!

	return 0;
}