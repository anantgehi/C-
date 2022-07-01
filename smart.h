#pragma once

class Cstring;

class SmartPointer
{
	Cstring* sptr;
public: SmartPointer();
	  SmartPointer(const char*);
	  Cstring* operator ->();
	  Cstring& operator *();
	  ~SmartPointer();
};