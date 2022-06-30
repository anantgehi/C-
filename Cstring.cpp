#include<iostream>
#include<cstring>
#include<memory>
#pragma warning (disable:4996)
#include "Cstring.h"

using namespace std;

Cstring::Cstring()
{
	m_len = 0;
	m_pbuff = new char('\0');
}
Cstring::Cstring(const char* s)
{
	m_len = strlen(s);
	m_pbuff = new char[m_len + 1];
	strcpy(m_pbuff, s);
}

Cstring::Cstring(char ch, int l)
{
	m_len = l;
	m_pbuff = new char[m_len + 1];
	memset(m_pbuff, ch, m_len);
	m_pbuff[m_len] = '\0';
}

void Cstring::displaystring()
{
	cout << m_pbuff << " " << m_len << endl;
}

void Cstring::acceptstring()
{
	//release the old memory!
	if (m_pbuff)
		delete[]m_pbuff;
	m_pbuff = new char[80]; //allocate new memory
	cout << "Enter the string " << endl;
	//cin >> m_pbuff;
	cin.getline(m_pbuff, 80, '\n');
	m_len = strlen(m_pbuff);
}

void Cstring::release()
{
	if (m_pbuff)
		delete[]m_pbuff;
	m_pbuff = nullptr;
}
//Cstring s4(s1);
Cstring::Cstring(const Cstring& ss)
{
	cout << "Copy ctor called" << endl;
	this->m_len = ss.m_len;
	this->m_pbuff = new char[m_len + 1]; //allocate new memory
	strcpy(m_pbuff, ss.m_pbuff);// perform deep copy
}
//s1=s1
Cstring& Cstring::operator=(const Cstring&ss)
{
	cout << "Assingment operator called" << endl;
	if (&ss == this) //check for self assignment
		return *this; //return the same object
	else
	{
		if (m_pbuff)
			delete[]m_pbuff; //release old memory first
		m_len = ss.m_len;
		m_pbuff = new char[m_len + 1];//allocate new memory
		strcpy(m_pbuff, ss.m_pbuff); //perform deep copy
		return *this;//return the invoking object
	}
}
//s3=s1+s2;

Cstring Cstring::operator+(const Cstring& ss)
{
	Cstring temp;//default ctor
	cout << "Operator + called" << endl;
	delete[]temp.m_pbuff;
	temp.m_len = this->m_len + ss.m_len;
	temp.m_pbuff = new char[temp.m_len + 1];
	strcpy(temp.m_pbuff, m_pbuff);
	strcat(temp.m_pbuff, ss.m_pbuff);
	return temp;
}
Cstring& Cstring::operator+=(const char* country)
{
	cout << "Operator += called" << endl;
	m_len += strlen(country);
	char* temp = new char[80];
	strcpy(temp,m_pbuff);
	delete[]m_pbuff;
	m_pbuff = new char[m_len + 1];
	strcpy(m_pbuff, temp);
	strcat(m_pbuff, country);
	delete[]temp;
	temp = nullptr;
	return *this;
}
char& Cstring::operator[](int index)
{
	if (index >=0 && index <=m_len)
		return m_pbuff[index];//return character at index position
}
Cstring::~Cstring()
{
	cout << "Destructor called" << endl;
	if (m_pbuff)
		delete[]m_pbuff;
	m_pbuff = nullptr;
}