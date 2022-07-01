#pragma once

class Complex; //forward declartion
//works only with pointers and references
//if you create objects then include header file!
//#include"complex.h"
class SmartPointer
{
	Complex* cptr;
public: SmartPointer();
	  SmartPointer(int, int);
	  Complex* operator -> ();
	  Complex& operator * ();
	  ~SmartPointer();
};