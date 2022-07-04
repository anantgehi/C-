#include <iostream>
#include"Cstring.h"
#include"Date.h"
#include"Employee.h"
using namespace std;

Employee::Employee()
{

}
Employee::Employee(int id, const char* nm, int dd, int mm, int yy):empid(id),name(nm),doj(dd,mm,yy)
{
	//empid = id;
	//name = Cstring(nm); //BT to UDT using ctor syntax
	//name = nm; //overload assingment operator which takes const char* as arg
	//doj = Date(dd, mm, yy);//BT to UDT using ctor syntax
}
void Employee::accept()
{
	cout << "Enter empid " << endl;
	cin >> empid;
	cin >> name;
	doj.acceptdate();
}
void Employee::show()
{
	cout << "Employee details are : " << endl;
	cout<< empid << " "<< name <<" ";
	//cout << doj << endl;
	doj.showdate();
}