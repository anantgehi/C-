#pragma once

#include"Employee.h"

class Manager :public Employee
{
	int no_sub,sal;
public: Manager();
	  Manager(int, const char*, int, int, int, int, int);
	  void accept();
	  void show();
	  float computesal();
};