#pragma once
#include<iostream>
// Mandatory Rule of 5
// Whenever you have any runtime attribute in your class
// 1. Destructor //To avoid memory leaks / close file pointers / database connections
// 2. Copy ctor // To avoid dangling pointer
// 3. assignment operator //To avoid memory leak and dangling pointer both!
// 4. move ctor //Will perform shallow copy //To reduce costly operations like deep copy
// 5. move assingment operator
#pragma pack(1)
class Cstring
{
	char *m_pbuff; //raw pointer //dynamic attribute //runtime attribute
	int m_len;
public: Cstring();//default ctor
	    explicit Cstring(const char*);
		Cstring(char, int);
		Cstring(const Cstring&); //reference is mandatory for copy ctors!
		Cstring(Cstring&&); //move ctor
		Cstring& operator =(const Cstring&); //assingment operator
		Cstring& operator =(Cstring&&);//move assingment operator
		Cstring operator +(const Cstring&);
		Cstring& operator +=(const char*);
		char& operator[](int);
		void displaystring();
	    void acceptstring();
		friend std::istream& operator >> (std::istream& iff, Cstring& ss);
		friend std::ostream& operator << (std::ostream& out, const Cstring& ss);
		void release();
		~Cstring();//destructor
};