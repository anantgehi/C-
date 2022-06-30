#include<iostream>
#include<crtdbg.h>
#include<cstring>
#pragma warning (disable:4996)

using namespace std;

int main()
{
	{
		//cout <<__DATE__<<" "<<__TIME__<<" "<<__LINE__<<" "<<__FUNCTION__<< " "<<"This is executed!"<<endl;

	char* temp = new char[80];//temporary string
	int n;
	cout << "Enter the number of strings" << endl;
	cin >> n;
	char** strings = new char* [n];//array of pointer to strings
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the string" << endl;
		cin >> temp;
		*(strings+i) = new char[strlen(temp) + 1]; //allocate memory
		strcpy(strings[i], temp); //copy the string
	}
	cout << "strings are" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << strings[i] << endl;
	}
	for (int i = 0; i < n; i++)
	{
		delete strings[i];
	}
	delete strings;
	strings = nullptr;
	delete[]temp;
	temp = nullptr;

	}
	cout << "Leaks =" << _CrtDumpMemoryLeaks() << endl;
	return 0;
}