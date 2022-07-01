#include <iostream>
#include"A.h"
#include"B.h"

using namespace std;

ABC::ABC():a(10){}
ABC::ABC(int aa) :a(aa) {}
void ABC::showa()
{
	cout << a << endl;
}
void ABC::operator=(const XYZ& xx)
{
	cout << "assingment operator called" << endl;
	a = xx.getx();
}
ABC::ABC(const XYZ& xx)
{
	cout << "ctor syntax called" << endl;
	a = xx.getx();
}