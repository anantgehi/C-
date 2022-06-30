#include<iostream>
#include"complex.h"

using namespace std;

//member intilizer list

int counter = 0; //global variable

int Complex::mycounter = 0; 
//Note: initilize static data member outside the class to avoid linker error!

Complex::Complex()
{
	real = 0;
	imag = 0;
	counter++;
	mycounter++;
	cout << "Default ctor" << endl;
}

Complex::Complex(int real,int imag)
{
	this->real = real;
	(*this).imag = imag;
	counter++;
	mycounter++;
}

void Complex::display()const 
{
	//const_cast<Complex* const>(this)->real=9999;//use const_cast to remove constantness of constant pointer
	//imag = 99999; //could be modified if declared mutable
	cout << this->real << " " << (*this).imag << endl;
	//cout << this << endl;
	//Note: Only member functions will have this pointer
	//this will hold address of the invoking object 
	//data type of this pointer is Complex * const this
	//Note: Non static functions can access static data members/global objects!
}

void Complex::count_objects()
{
	cout << "Count of objects is " << counter << " " << mycounter << endl;
	//cout << real << " " << imag << endl;
	//cout << this;
	//Note: nonstatic data member cannot be accessed inside static member functions
	//Note: There is no this pointer within static member functions!
	//Note: static functions can access only static data members and global variables
}

void Complex::accept()
{
	cout << "Enter real and imag" << endl;
	cin>> real >>imag;
}
int Complex::getreal()const
{
	return this->real;
}
int Complex::getimag()const
{
	return this->imag;
}
void Complex::setreal(int real)
{
	if (real>=1 && real <1000) //data validation
		this->real = real;
}
void Complex::setimag(int imag)
{
	this->imag = imag;
}