#include<iostream> 

using namespace std;

int foo(int xx)
{
	return xx; //if the function is returning by value it returns rvalue
}
int& bar(int &xx)
{
	return xx; //if the function is returning by reference it returns lvalue
}
void show(int& ref)
{
	cout << "lvalue reference" << endl;
}

void show(const int& ref)
{
	cout << "lvalue const reference" << endl;
}

void show(int&& ref)
{
	cout << "rvalue reference" << endl;
}
int x = 0;
int main()
{
	int x = 10;
	int y = 20;
	cout << x << endl;
	::x = 9999;
	cout << "Global x is " << ::x << endl;

	//x is lvalue because lvalues will always have name
	//10 is rvalue, rvalues will not have any name
	// rvalues are temporaries or could be expressions
	//int expr = (x + y) - (x * y);
	//cout << &expr << endl;
	//Here expr is lvalue and (x + y) - (x * y) is rvalues
	//You can always find addresses of lvalues
	//You cannot find addresses of rvalues
	//Here x is lvalue and lvalues can be used beyond expressions
	//++x = 100;
	//cout << x << endl;
	//cout<<foo(x);
	//x = foo(x); //Here foo is returning rvalue
	//foo(x) = x; //error!
	//cout << x << endl;
	//bar(x) = 999; //Here bar is returning lvalue
	//cout << x << endl;
	//cout << bar(x) << endl;
	//Note: rvalue references cannot be bound to an lvalue
	//Note: lvalue references can be bound only to lvalues
	//Note: rvalue references can be bound only to rvalues
	//int& ref1 = x;
	//Here ref is lvalue reference which is bound to lvalue is x
	/*int&& ref2 = 100;*/
	//int&& ref2 = x; //error
	//Here ref2 is rvalue reference which is bound to rvalue i.e. 100
	/*const int& ref3 = 99;*/
	//Here ref3 is a constant reference which can be bound to rvalues!
	//int& ref4 = 88; //error

	//int&& ref5 = foo(x);//foo returns rvalue so you can have rvalue reference attached to location
	//cout << ref5 << endl;

	//int& ref6 = foo(x); //error bez foo is returning rvalue and you cannot attach it to lvalue references
	//cout << ref6 << endl;

	/*int& ref7 = bar(x); *///bar is returning lvalue and you can attach it to lvalue references
	//cout << ref7 << endl;

	//int&& ref8 = bar(x);//error bar returns lvalue which you cannot attach to rvalue references
	//cout <<ref8 << endl;

	/*show(x);
	show(10);
	show(10 + 3 - 4 * 2);*/
	return 0;
}

