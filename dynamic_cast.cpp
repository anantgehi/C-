#include <iostream>
#include<typeinfo> //RTTI


using namespace std;


class Base
{
public: virtual void foo() { cout << "foo of Base" << endl; }
};
class Derived :public Base
{
public: void foo() { cout << "foo of Derived" << endl; }
		void bar(){ cout << "Bar of Derived" << endl; }
};

class Demo
{

}d1;

int main()
{
	Base* bptr = new Derived;
	if (typeid(*bptr) == typeid(Derived))
	{
		bptr->foo();
		static_cast<Derived*>(bptr)->bar();
	}
	else
	{
		cout << "Call functions of other class" << endl;
	}
		

	//Base* bptr = new Base;
	//cout << typeid(*bptr).name() << endl;//class Base
	//bptr = new Derived;
	//cout << typeid(*bptr).name() << endl;//class Derived //Note: use virtual keyword for runtime!!!


	/*
	int x = 10;
	int* ptr = &x;
	cout << typeid(x).name() << endl; //int
	cout << typeid(ptr).name() << endl;//int *
	cout << typeid(*ptr).name() << endl;//int	RTTI
	*/

	//float z = 3.42;
	//float* y = &z;
	/*
	cout << typeid(x).name() << endl;
	cout << typeid(y).name() << endl;
	cout << typeid(z).name() << endl;
	cout << typeid(d1).name() << endl;
	*/

	/*
	Base* bptr = new Derived;
	//Derived* dptr;
	bptr = dynamic_cast<Derived*>(bptr);
	//Derived* dptr=new Derived;
	if (bptr == NULL)
	{
		cout << "Dynamic cast has failed!" << endl;
	}
	else
	{
		bptr->foo();
		static_cast<Derived*>(bptr)->bar();
		
	}
	//bptr = dptr;
	//delete bptr;
	*/
	/*
	Base b1;
	Derived d1;
	Base& bref = b1;
	try
	{
		Derived& dref = dynamic_cast<Derived&>(bref);
		//Derived* dptr=new Derived;
		dref.foo(); //call overridden function of derived class 
		static_cast<Derived&>(dref).bar();// call non overridden function of derived class
	}
	catch (bad_cast& bd)
	{
		cout << bd.what() << endl;
	}
	*/

	return 0;
}