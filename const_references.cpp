#include<iostream>
#define SHOW(x,y) cout<<"Macro called"

using namespace std;

class Test
{
	const int value1;
	int& myref;
public: Test(int xx,int &yy):value1(xx),myref(yy)
		{
		}
	  void display()
	  {
		  cout << value1 << " " << myref << endl;
	  }
};

void foo()
{
	cout << "foo called" << endl;
}
int add(int x, int y)
{
	cout << "add called" << endl;
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
void bar( int (*p)(int, int))
{
	cout << "bar called" << endl;
	cout << p(100, 200) << endl;//call to add indirectly
}
class Demo
{
public: void operator ()(int x,int y)
		{
			cout << "functor called" << endl;
		}
};
int main()
{
	SHOW(10,20); //macro

	int (*show1)(int, int);
	show1 = add;
	show1(99, 88); //function pointer

	Demo show2;
	show2(1, 2); //here show2 is object on which function call operator is overloaded 




	/*
	void (Test:: * myptr)();
	myptr = &(Test::display);
	int x = 10;
	int y = 20;
	Test t1(x,y);
	(t1.*myptr)(); //call using function pointer!
	*/

	/*
	int (*ptr[3])(int, int);
	ptr[0] = add;
	ptr[1] = sub;
	ptr[2] = mul;

	for (int i = 0; i < 3; ++i)
		cout << ptr[i](10, 20) << endl; //call using function pointers
	*/

	//bar(add);//pass the address of add function
	//int* brr[5];
	//int(*brr)[5];

	/*
	void(* ptr)(); //declaration of function pointer
	//cout << foo << endl; 
	ptr = foo; //initlize the pointer
	ptr(); //call using function pointer
	ptr = bar;
	(*ptr)(); //call using function pointer
	foo();
	*/

	/*
	int x = 10;
	int y = 20;
	Test t1(x, y);
	t1.display();
	*/
	return 0;
}