#include <iostream>
#include"A.h"
#include"B.h"

using namespace std;

XYZ::XYZ() :x(20) {}
XYZ::XYZ(int xx) :x(xx) {}
int XYZ::getx()const
{
	return x;
}
void XYZ::showx()
{
	cout << x<< endl;
}
XYZ::operator ABC()
{
	cout << "operator conversion function called" << endl;
	ABC myabc(x); //Create the object with the state required
	return myabc; //return the object
}