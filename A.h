#pragma once

class XYZ;

class ABC
{
	int a;
public: ABC();
	  void operator =(const XYZ&);
	  ABC(const XYZ&);//ctor syntax to convert UDT to UDT
	  ABC(int);
	  void showa();
};