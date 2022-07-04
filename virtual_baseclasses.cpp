#include <iostream>

using namespace std;

class Base
{
	int x;
public: Base() :x(0) { cout << "default ctor Base" << endl; }
	  Base(int xx) :x(xx)
	  {
		  cout << "ctor Base" << endl;
	  }
	  void show()
	  {
		  cout << x << endl;
	  }
	  ~Base()
	  {
		  cout << "dest Base" << endl;
	  }
};
class Derived1 :public Base
{
	int y;
public: Derived1(int xx, int yy) :Base(xx), y(yy)
{
	cout << "ctor Derived1" << endl;
}
	  void show()
	  {
		  Base::show();
		  cout << y << endl;
	  }
	  ~Derived1()
	  {
		  cout << "dest Derived1" << endl;
	  }
};
class Derived2 : public Base
{
	int z;
public: Derived2(int xx, int zz) :Base(xx), z(zz)
{
	cout << "ctor Derived2" << endl;
}
	  void show()
	  {
		  cout << z << endl;
	  }
	  ~Derived2()
	  {
		  cout << "dest Derived2" << endl;
	  }
};
class Derived :public Derived1, public Derived2
{
	int a;
public: Derived(int aa, int xx, int yy, int zz) :Derived1(xx, yy), Derived2(xx, zz)
{
	cout << "ctor Derived" << endl;
	a = aa;
}
	  ~Derived()
	  {
		  cout << "dest Derived" << endl;
	  }
	  void show()
	  {
		  cout << a << endl;
		  Derived1::show();
		  Derived2::show();

	  }
};

int main()
{
	Derived dd(100, 200, 300, 400);
	dd.show();
	cout << sizeof(Base) << " " << sizeof(Derived1) << " " << sizeof(Derived2) << " " << sizeof(Derived) << endl;
	return 0;
}