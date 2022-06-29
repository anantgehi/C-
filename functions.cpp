#include<iostream>
#include"head.h"


using namespace std;

//extern const int myconst = 99;

void display_employee(Employee* eptr, int n)
{
	cout << "Employee details are " << endl;
	for (int i = 0; i < n; ++i)
		cout << eptr[i].empid << " " << (eptr + i)->name << endl;
}

int add()
{
	myvalue = -99;
	x = 60;
	printf("%d", x); //60
	printf("square is %d", square(5));
	return myvalue;
}

void foo()
{
	printf("foo called");
	//printf("%d", myconst);
}
