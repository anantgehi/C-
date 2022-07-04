#include <iostream>
#include<crtdbg.h>

using namespace std;


class Base //ABSTRACT CLASS
{
	int x;
public: Base():x(10){}
	    virtual void foo() = 0;
		virtual void show()
		{
			cout << x << endl;
		}
		void bar()
		{
			cout << "bar base" << endl;
		}
		virtual ~Base() = 0; //pure virtual destructor!
};
Base::~Base()
{
	cout << "Pure virtual destructor! If you dont implement body,its a linker error!!!" << endl;
}
//Note: A class inherited from abstract class also becomes abstract by default
//unless you override pure virtual function into derived class
//Then the dervied class can be instantiated
class Derived :public Base
{
public: Derived(){}
		void foo()
		{
			this->bar();
			//Base::foo();
			this->show();
			cout << "foo derived" << endl;
		}
};


int main()
{
	Base* bptr = new Derived;
	bptr->foo();
	//Base b1;
	delete bptr;

	return 0;
}