// conversions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//BT-BT //casting operators const_cast static_cast dynamic_cast reinterpret_cast
//BT-UDT // ctor or overload assingment operator
//UDT-BT // operator conversion function
//UDT-UDT // ctor / assingment / operator conversion functions!

class Fraction
{
	int num, den;
public: Fraction():num(0),den(0){ cout << "ctor called" << endl; }
	  
	  explicit Fraction(int value) 
	  { 
		cout << "ctor conversion called" << endl; 
		num = value; den = 0; 
	  }
	  void operator =(int val)
	  {
		  cout << "operator = called" << endl;
		  num = val;
	  }
	  Fraction(int num, int den) :num(num), den(den) { cout << "ctor called" << endl; }
	  void show() { cout << num << " "<<den << endl; }
	  explicit operator float() {
		  cout << "operator conversion function called" << endl;
		  return num / static_cast<float>(den);
	  }

};

int main()
{
	Fraction f1(10, 3);
	f1.show();//10 3
	
	f1 = 8; //BT to UDT // use assignment operator 
	//f1.operator=(8);
	f1.show();//8 3

	//f1 = Fraction(8); //BT to UDT //use ctor syntax for conversion
	//f1.show();//8 0

	float result = f1.operator float();//UDT to BT
	//float result = f1;
	//result.operator=(f1); //not possible
	//float result=float(f1);//not possible
	cout << result << endl; //possible
	/*
	cout << 1 /static_cast<float> (2)<<endl; //explict type casting on builitn types
	cout << 1 / (float)2<<endl;
	int myval = static_cast<int>(4.5);
	
	int x = 10;
	//char* ptr = (char*) & x;// Cstyle casting
	char* ptr = reinterpret_cast<char*>(&x); //convert any type of pointer to any other type!
	*ptr = 'A';
	cout << *ptr << endl;

	const int val = 10;
	//int* ptr1 = (int*) & val;//cstyle casting
	int* ptr1 = const_cast<int*>(& val); //c++ casting to remove constantness of const pointer!
	*ptr1 = 200;
	cout << *ptr1 << endl;
	*/
	return 0;
}

