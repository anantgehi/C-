#include <iostream>
#include<crtdbg.h>

using namespace std;


class Base
{
public: Base()
		{
			cout << "ctor of base" << endl;
			bar(); //bar base will be called
		}
		
		void foo()//Base * const this
		{
			cout << "foo base" << endl;
			this->bar(); //bar derived will be called!
		}
	   virtual void bar()
	   {
		   cout << "bar base" << endl;
	   }
};

class Derived :public Base
{
public: Derived ()
		{
			cout << "Derived Ctor" << endl;
		}
	  virtual void bar()
	  {
		  cout << "bar derived" << endl;
	  }
};

void show1(Base b)
{
	b.bar(); //bar of Base!
}
void show2(Base *b)
{
	b->bar(); //bar of derived
}
void show3(Base &b)
{
	b.bar(); //bar of derived
}


int main()
{
	Derived d1;
	show1(d1);
	show2(&d1);
	show3(d1);


	//Derived d1;
	//d1.foo();
	return 0;
}