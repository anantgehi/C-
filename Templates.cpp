// Templates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include"temp.h"

using namespace std;


int main()
{
	show("sachin", 1000);
	show(10, "sehwag");
	show("virat", "rohit");
	show(67, 7.3f);

	/*
	int val1 = 100, val2 = 200;
	cout << "Before swap " << val1 << " " << val2 << endl;
	myswap(val1, val2);
	cout << "After swap " << val1 << " " << val2 << endl;
	cout << "Sum is " << add(val1, val2) << endl;
	cout << "Sum is " << add(10,20) << endl;

	string company1 ="ibm", company2 = "capgemini";
	cout << "Before swap " << company1 << " " << company2 << endl;
	myswap(company1,company2);
	cout << "After swap " << company1 << " " << company2 << endl;
	cout << "Concatenated string is " << add(company1, company2) << endl;

	char arr[20] = "accenture";
	char brr[20] = "wipro";
	cout << "Before swap " << arr << " " << brr << endl;
	myswap(arr, brr);
	cout << "After swap " << arr << " " << brr << endl;
	*/

	return 0;
}

