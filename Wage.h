#pragma once
#include"Employee.h"

class WageEmployee :public Employee
{
	int hrs, rate;
public: WageEmployee();
	  WageEmployee(int, const char*, int, int, int, int, int);
	  void accept();
	  void show();
	  float computesal();
};