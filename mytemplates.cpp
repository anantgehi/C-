#include<string>
#pragma warning (disable:4996)
#include"temp.h"

//templates will have internal linkage!
//templates must be defined at the place of declaration in header files!

/*
void myswap(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
void myswap(std::string& x, std::string& y)
{
	std::string temp;
	temp = x;
	x = y;
	y = temp;
}
*/
void myswap(char x[],char y[])
{
	char temp[20];
	strcpy(temp,x);
	strcpy(x,y);
	strcpy(y,temp);
}