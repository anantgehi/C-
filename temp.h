#pragma once
#include<iostream>
#include<string>


template<typename T1>
void myswap(T1& x, T1& y)
{
	T1 temp;
	temp = x;
	x = y;
	y = temp;
}

template<typename T1>
T1 add(T1& x, T1& y)
{
	return x + y;
}
template<typename T1>
T1 add(T1&& x, T1&& y)
{
	return x + y;
}
//void myswap(int& x, int& y);
//void myswap(std::string& x, std::string& y);
void myswap(char arr[], char brr[]);


template<typename T1, typename T2>
void show(T1&& x, T2&& y)
{
	std::cout << x << " " << y << std::endl;
}
