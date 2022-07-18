// stls.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#pragma warning (disable:4996)
using namespace std;
class Employee
{
	string name;
	int empid;
public: Employee(){}
	  Employee(string nm,int empid):empid(empid),name(nm){}
	  void show()
	  {
		  cout << name << " " << empid << endl;
	  }
	  bool operator < (Employee& ee)
	  {
		  return this->empid < ee.empid;
	  }

};
int main()
{
	vector<Employee> vt(3);
	vt[0]=Employee("ananat", 1000);
	vt[1]=Employee("prashant",3000);
	vt[2] = Employee("kaushal", 2000);
	vt.push_back(Employee("omkar", 5000));
	vt.push_back(Employee("kshitij", 4000));
	vt.insert(vt.begin(), Employee("rajveer", 6000));
	sort(vt.begin(), vt.end());
	vector<Employee>::iterator ptr2;
	cout << "Using iterators are " << endl;
	for (ptr2 = vt.begin(); ptr2 != vt.end(); ++ptr2)
		ptr2->show();

	/*
	vector<string> v1{"india","australia","england","srilanka","southafrica"};
	cout << v1.size() << " " << v1.capacity() << endl;
	cout << "Elements are " << endl;
	for (int i = 0; i < v1.size(); ++i)
		cout << v1[i] << endl;

	vector<string>::iterator ptr1;
	cout << "Using iterators are " << endl;
	for (ptr1 = v1.begin(); ptr1 != v1.end(); ++ptr1)
		cout << *ptr1 << endl;

	vector<string>::reverse_iterator ptr2;
	cout << "Using iterators are " << endl;
	for (ptr2 = v1.rbegin(); ptr2 != v1.rend(); ++ptr2)
	cout << *ptr2 << endl;
	*/

	/*
	vector<int> v1(3);
	v1[0] = 1000;
	v1[1] = 0;
	v1[2] = 3000;
	vector<int>::iterator ptr1;
	cout << "Using iterators are " << endl;
	v1.push_back(40);
	v1.push_back(50);
	/*
	v1.insert(v1.begin(),100);
	v1.insert(v1.begin()+5, 600);
	v1.pop_back();
	v1.pop_back();
	v1.pop_back();
	v1.erase(v1.begin());
	v1.erase(v1.begin());
	v1.erase(v1.begin());
	for (ptr1 = v1.begin(); ptr1 != v1.end(); ++ptr1)
		cout << *ptr1 << endl;
		
	//sort(v1.begin(), v1.end());
	reverse(v1.begin(), v1.end());	
	vector<int>::iterator ptr2;
	cout << "Using iterators are " << endl;
	for (ptr2 = v1.begin(); ptr2 != v1.end(); ++ptr2)
		cout << *ptr2 << endl;
	*/

	/*
	vector<string>::const_iterator ptr3;
	cout << "Using iterators are " << endl;
	for (ptr3 = v1.cbegin(); ptr3 != v1.cend(); ++ptr3)
		cout << *ptr3 << endl;
	*/

	return 0;
}
