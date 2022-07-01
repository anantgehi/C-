#pragma once
#pragma pack(1)
class Date
{
	int d, m, y;
public: Date();
	  Date(int, int, int);
	  void acceptdate();
	  void showdate();
};