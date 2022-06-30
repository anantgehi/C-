// Complex.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<crtdbg.h>
#include"complex.h"

using namespace std;

int main()
{
    //const object makes the object immutable
    //the state of the object cannot be changed
    //constant object can invoke only const member functions
    //even non constant object can call const member functions!
   
     const Complex c1(10,20);
     cout << sizeof(c1) << endl;
     c1.display();
     cout << c1.getreal() << " " << c1.getimag() << endl;
     //Complex c2;
     //c2.setreal(-99);
     //c2.setimag(-1);
     //c2.display();
     {
        //Complex* cptr = (Complex*)malloc(sizeof(Complex));
        //Complex* cptr = new Complex; //default ctor 
        //Complex* cptr = new Complex(100, -99);//parameterized ctor
        //cout << cptr << endl;
        //cptr->accept();
        //cptr->display();
        //(*cptr).display();
        //delete cptr;
        //cptr = nullptr;
        
        //int num;
        //cout << "Enter the number of objects" << endl;
        //cin >> num;
       
        //Complex* cptr = new Complex[3];

        /*
        for (int i = 0; i < 3; ++i)
            cptr[i].accept();

        for (int i = 0; i < 3; ++i)
            (cptr+i)->display();

        delete[]cptr;
        cptr = nullptr;
        */

        //c1.display();
        //c1.count_objects();
        Complex::count_objects(); //invoke static member functions using class name!
    }
    cout << "Leaks " << _CrtDumpMemoryLeaks() << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
