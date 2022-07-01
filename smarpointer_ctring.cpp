#include<iostream>
#include"smart.h"
#include "Cstring.h"

using namespace std;

SmartPointer::SmartPointer()
{
	sptr = new Cstring;
}
SmartPointer::SmartPointer(const char *s)
{
	sptr = new Cstring(s);
}
SmartPointer::~SmartPointer()
{
	if (sptr)
		delete sptr;
	sptr = nullptr;
}
Cstring* SmartPointer::operator->()
{
	return sptr;
}
Cstring& SmartPointer::operator*()
{
	return *sptr;
}