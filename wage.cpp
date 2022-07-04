#include<iostream>
#include"Wage.h"

using namespace std;

WageEmployee::WageEmployee()
{

}
WageEmployee::WageEmployee(int empid,const char*nm,int d,int m,int y,int hrs,int rate):Employee(empid,nm,d,m,y),hrs(hrs),rate(rate)
{

}
void WageEmployee::accept()
{
	Employee::accept();
	cout << "Enter hrs and rate" << endl;
	cin >> hrs >> rate;
}
void WageEmployee::show()
{
	Employee::show();//call the overridden function of base class
	cout << hrs << " " << rate << endl;
}
float WageEmployee::computesal()
{
	return hrs * rate;
}