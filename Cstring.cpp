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
Cstring::~Cstring()
{
	cout << "Destructor called" << endl;
	if (m_pbuff)
		delete[]m_pbuff;
	m_pbuff = nullptr;
}