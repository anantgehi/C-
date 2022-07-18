// string_container.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<cstring>
#include<sstream> //parse strings
#include<algorithm>

#pragma warning (disable:4996)
using namespace std;
int main()
{
    //string s1("vinsys");
    /*   
    string s2;
    s2 = s1; //strcpy
    reverse(s1.begin(), s1.end()); //strcpy
    if (s1 == s2) //strcmp
        cout << "Pallindrome" << endl;
    else
        cout << "Not Pallindrome" << endl;
    s1.append("x");
    */
    //cout << "Position is " << s1.find('v') << endl;
    //cout << s1 << endl;

    /*
    string doj("5 7 2022");
    int dd;
    int mm;
    int yy;
    stringstream sstr;//create a wrapper to string object of stringstream class
    sstr << doj;
    sstr >> dd;
    sstr >> mm;
    sstr >> yy;
    cout << "you have entered " << dd << "/" << mm << "/" << yy << endl;
    */


    //string ss("Vinsys");
 
    //const char* mystring = ss.c_str();
    //char mystr[20];
    //cout << strlen(mystring) << endl;
    //cout << strcpy(mystr,mystring) << endl;

    //string s("Hello world");//paramertized ctor
    //cout << s << endl;
    //string s1;//default ctor
    //cout << "Enter the string" << endl;
    //cin >> s1; //extraction operator
    //std::getline(cin, s1);
    //cout << s1 << endl;
    //string s2(s); //copy ctor
    //cout << s2 << endl;
    //string s3(s, 6, 6); //world //obj,start,end
    //cout << s3 << endl;
    //string s4("vinsys"); //const char *
    //cout << s4 << endl;
    //string s5("const char *", 5);
    //cout << s5 << endl;
    //string s6(20, 'v');
    //cout << s6 << endl;
    //string s7(s.begin(), s.end());
    //cout << s7 << endl;
    //string s8(s.begin(), s.begin()+5);
    //cout << s8 << endl;
    //string s9("india");
    //cout << s9.size() <<" "<<s9.capacity()<<endl;
    //s9.reserve(50);
    //cout << s9.size() << " " << s9.capacity() << endl;
    //s9.shrink_to_fit();
    //cout << s9.size() << " " << s9.capacity() << endl;
    //s9.resize(20, 'x');
    //cout << s9 << endl;
    //string s1("Hello");
    //string s2("!!");
    //cout << s1.operator[](0) << endl;
    //s1[0] = 'P';
    //cout << s1 << endl;
    //s1 += "World";
    //s1.operator+=("world");
    //cout << s1 << endl;
    //operator<<(cout, s1);

    return 0;
}
