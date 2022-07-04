#include <iostream>
#include<crtdbg.h>

using namespace std;


class Base
{
	int x;
	float y;
	char z;
public: Base():x(10),y(3.142),z('A'){}
	  void show()
	  {
		  cout << x << " " << y << " " << z << endl;
	  }
};

int main()
{
	Base b1;
	b1.show();
	int* ptr = reinterpret_cast<int*>(& b1);
	*ptr = 20000;
	b1.show();
	ptr++;

	*reinterpret_cast<float*>(ptr)=98.76;
	b1.show();
	ptr++;

	*reinterpret_cast<char*>(ptr) = 'Z';
	b1.show();
	
	return 0;
}