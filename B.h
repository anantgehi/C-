#pragma once
#include"A.h"

class XYZ
{
	int x;
public: XYZ();
	  explicit XYZ(int);
	  int getx()const;
	  explicit operator ABC();
	  void showx();
};