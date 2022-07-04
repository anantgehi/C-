#include <iostream>
#pragma pack (1)
using namespace std;

class Base
{
protected: int x;
public:	  Base():x(10){}
		  void show()
		  {
			  cout << x << endl;
		  }
};
class Derived1 :public virtual  Base //virtual Base class
{

};
class Derived2 :public virtual Base
{
};
class Derived :public Derived1, public Derived2
{
public: //int getx()const { return Derived1::x; }
	//int getx()const { return x; }
};

int main()
{
	Derived d;
	cout << sizeof(Base) << " " << sizeof(Derived1) << " " << sizeof(Derived2) << " " << sizeof(Derived) << endl;
	//cout<<d.getx()<<endl;
	//d.Derived2::show();
	//d.show();

	return 0;
}