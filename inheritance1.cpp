// Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string.h>
#pragma warning (disable:4996)
using namespace std;

class Student
{
	char name[20];
public: /*
		Student() 
		{ 
			name[0] = '\0';
			cout << "student ctor default" << endl; 
		}*/
	    Student(const char* nm)
	    {
			cout << "Student para ctor called" << endl;
		  strcpy(name, nm);
	    }
		void display_name()
		{
			cout << name << endl;
		}
		~Student() { cout << "student dtor called" << endl; }
};

class Intern : public Student
{
	float sal;
public: Intern():Student("\0") { cout << "Intern ctor default called" << endl; }
	    Intern(const char *name,float sal): sal(sal),Student(name)
		{ 
			cout << "Intern para ctor called" << endl; 
		}
		void show()
		{
			this->display_name(); //call the function of base class
			cout << sal << endl;
		}
		~Intern(){ cout << "Intern dtor called" << endl; }


};

int main()
{
	{
		Intern first_intern("Hrishikesh", 100000);
		first_intern.show();
	}
	return 0;
}
