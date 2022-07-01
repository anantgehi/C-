// Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Base
{
//access specifiers

public: void foo()// Base * const 
		{
			cout << "foo base" << endl;
			cout << this << endl;
			//bar();
		}
		void bar()
		{
			cout << "bar base" << endl;
		}

};

//Mode of inheritance
class Derived1 : public Base
{
	//using Base::foo; //using private section restrict foo function through derived class object!
public: /*
		void operator=( const Base &b)
		{
			cout << "assingment operator" << endl;
		}
		*/
		void myfoo() // Derived * const this
		{
			cout << "myfoo of derived" << endl;
			//dynamic_cast<Base* const>(this)->bar(); //downcasting fails //error!!!
			this->bar(); //upcasting
			this->foo(); //upcasting
		}
};
class Derived2 : Base
{
//public: using Base::bar; //use bar function through derived class object 
};
int main()
{
	//Base b1;
	//cout << &b1 << endl;
	//b1.myfoo();

	//Derived1 d1;
	//d1.foo();
	//cout << &d1 << endl;
	//d1.myfoo();
	//d1.bar();

	//Derived2 d2;
	//d2.foo();
	//d2.bar();

	//Base b1;
	//b1 = d1;
	//d1 = b1; //d1.operator=(b1);

	return 0;
}
