#include<iostream>
#include"Wage.h"
#include"Sales.h"

using namespace std;

SalesPerson::SalesPerson()
{

}
SalesPerson::SalesPerson(int empid, const char* nm, int d, int m, int y, int hrs, int rate,float sales,float comm) :WageEmployee(empid, nm, d, m, y,hrs,rate), sales(sales),comm(comm)
{

}
void SalesPerson::accept()
{
	WageEmployee::accept();
	cout << "Enter sales and comm" << endl;
	cin >> sales >> comm;
}

void SalesPerson::show()
{
	WageEmployee::show();//call the overridden function of base class
	cout << sales << " " << comm << endl;
}
float SalesPerson::computesal()
{
	return WageEmployee::computesal()+(sales*comm);
}