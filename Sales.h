#pragma once
#include"Wage.h"

class SalesPerson :public WageEmployee
{
	float sales, comm;
public: SalesPerson();
	  SalesPerson(int, const char*, int, int, int, int, int,float,float);
	  void accept();
	  void show();
	  float computesal();
};