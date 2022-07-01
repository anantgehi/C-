#pragma once

//structure padding
#pragma pack (1)
#include<iostream>
class Complex
{
	int real;//data member
	mutable int imag; //data member can be modified in const member function
	//const int value=1000;
	static int mycounter; //static data member
public: Complex();//default ctor
	  Complex(int,int);//paramterized ctor
	  Complex operator+(const Complex&);
	  Complex operator+(int);
	  //Complex& operator++();//preincrement
	  //Complex operator++(int);//postincrement
	  bool operator == (const Complex&);//relational operator
	  void accept();
	  int getreal()const;
	  int getimag()const;
	  void setreal(int);
	  void setimag(int);
	  void display()const; //const member function //readonly function
	  static void count_objects(); //static member function 
	  static void* operator new(size_t);
	  static void operator delete(void*, size_t);
	  static void* operator new[](size_t);//new for arrays
	  static void operator delete[](void*, size_t); //delete for array
	  friend Complex operator+(int r, Complex& c);
	  friend Complex& operator++(Complex &cc);
	  friend Complex operator++(Complex&,int);
	  friend std::istream& operator >> (std::istream&,Complex&);
	  friend std::ostream& operator << (std::ostream&, const Complex&);
};

extern int count;
