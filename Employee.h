#pragma once

#include"Cstring.h"
#include"Date.h"
#pragma pack(1)
class Employee //container class will contain contained objects
{
	int empid;
	Cstring name;//contained object
	Date doj;//contained object
public: Employee();
	  Employee(int, const char*, int, int, int);
	  void accept();
	  void show();
};