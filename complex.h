#pragma once

//structure padding
#pragma pack (1)

class Complex
{
	int real;//data member
	mutable int imag; //data member can be modified in const member function
	//const int value=1000;
	static int mycounter; //static data member
public: Complex();//default ctor
	  Complex(int,int);//paramterized ctor
	  void accept();
	  int getreal()const;
	  int getimag()const;
	  void setreal(int);
	  void setimag(int);
	  void display()const; //const member function //readonly function
	  static void count_objects(); //static member function 
};

extern int count;
