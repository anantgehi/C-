#include<iostream>
#include"Manager.h"

using namespace std;

Manager::Manager()
{

}
Manager::Manager(int empid, const char* nm, int d, int m, int y, int no_sub, int sal) :Employee(empid, nm, d, m, y)
{
	this->no_sub = no_sub;
	this->sal = sal;
}
void Manager::accept()
{
	Employee::accept();
	cout << "Enter no_of_sub and sal" << endl;
	cin >> no_sub >> sal;
}
void Manager::show()
{
	Employee::show();//call the overridden function of base class
	cout << no_sub << " " << sal << endl;
}
float Manager::computesal()
{
	return no_sub * sal;
}