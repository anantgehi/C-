#include <iostream>
#include<crtdbg.h>

using namespace std;

//Note: It is not mandatory to virtual function into derived class
// In that case base class virtual function gets called!
//Note: ctor can never be virtual but DTOR must be virtual
//Note: global functions and static functions cannot be virtual
//Note: only member functions can be virtual
//Note: The size of every object of a class containing minimum one virtual function 
// will be increased by 4 bytes because every object will have its own VPTR
//Note: VPTR points to VTABLE
//Note: VTABLE is static array of function pointers. 
//Only the addresses of virtual functions are stored in VTABLE
//Note: VTABLE belongs to class containing virtual function
//Note: If a class is inherited from some class it will have its own separate VTABLE!
//Note: The moment when you create object of the class VTABLE will be loaded on RAM (memory)
// and ctor will initilize VPTR to point to VTABLE of that class!


class Base
{
public: Base()
{
	cout << "ctor base" << endl;
}
	  virtual void foo() //virtual function!
	  {
		  cout << "foo base" << endl;
	  }
	  virtual void bar() //virtual function!
	  {
		  cout << "Bar base" << endl;
	  }
	  virtual ~Base()
	  {
		  cout << "Dest base" << endl;
	  }
};
class Derived :public Base
{
public: Derived()
{
	cout << "ctor derived" << endl;
}
	  void foo() //virtual function!
	  {
		  cout << "foo Derived" << endl;
	  }
	  void newbar()
	  {
		  cout << "newbar Derived" << endl;
	  }
	  virtual ~Derived()
	  {
		  cout << "Dest derived" << endl;
	  }
};
typedef void (*ptr1)();
int main()
{
	//Base b1;
	/*
	Derived d1;
	cout << "Address of VPTR of Base " << &b1 << endl;
	cout << "Address of VTABLE of Base " << reinterpret_cast<int*> (&b1) << endl;

	cout << "Address of VPTR of Derived "<< & d1<<endl;
	//cout << "Address of VTABLE of Derived " << reinterpret_cast<int*> ( & d1) << endl;
	cout << "Address of First virtual function  of Derived " << (int*) *(int*) (& d1) << endl;
	*/
	ptr1 fun1 = (ptr1)(*(int*)*(int* )&b1);
	fun1();
	return 0;
}