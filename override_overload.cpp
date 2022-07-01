#include <iostream>

using namespace std;

class Base
{
public: 
	void foo() { cout << "foo base" << endl; }
	void foo(int xx) { cout << "foo base int" << endl; }
	void foo(float xx) { cout << "foo base float" << endl; }
};

class Derived :public Base
{
public: //void foo() //overridden function 
		//{
			//cout << "foo derived " << endl;
			//this->foo(); //bad recursion
			//Base::foo(); // call overridden function of base class
		//}
		using Base::foo; //make all the functions of base class visible through your derived class object!
	    int foo(int x, int y) { cout << "foo dervied with 2 integers" << endl; return 0; }
};

int main()
{
	Derived d1;
	d1.foo();
	d1.foo(10);
	d1.foo(3.14f);
	d1.foo(1,2);
	return 0;
}