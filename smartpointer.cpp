#include<iostream>
#include"Smart.h"
#include"complex.h"

using namespace std;

SmartPointer::SmartPointer()
{
	cptr = new Complex;
}
SmartPointer::SmartPointer(int real,int imag)
{
	cptr = new Complex(real, imag);
}
Complex* SmartPointer::operator->()
{
	return cptr;
}
Complex& SmartPointer::operator*()
{
	return *cptr;
}
SmartPointer::~SmartPointer()
{
	if (cptr)
		delete cptr;
	cptr = nullptr;
}

