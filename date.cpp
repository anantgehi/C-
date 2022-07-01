#include<iostream>
#include"Date.h"

using namespace std;

Date::Date():d(1),m(1),y(2000){}
Date::Date(int dd,int mm,int yy) :d(dd), m(mm), y(yy) {}
void Date::acceptdate()
{
	cout << "Enter date" << endl;
	cin >> d >> m >> y;
}
void Date::showdate()
{
	cout <<"Entered date is : " <<d<<"/"<<m<<"/"<<y<<endl;
}