// Complex.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<crtdbg.h>
#include"complex.h"
#include<exception>
#include"Smart.h"
using namespace std;

int main()
{
    //const object makes the object immutable
    //the state of the object cannot be changed
    //constant object can invoke only const member functions
    //even non constant object can call const member functions!
   
     //const Complex c1(10,20);
     //cout << sizeof(c1) << endl;
     //c1.display();
     //cout << c1.getreal() << " " << c1.getimag() << endl;
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
        //Complex::count_objects(); //invoke static member functions using class name!
        
        //Complex c1(10,20);
        //Complex c2(10,20);
        //Complex c3;
        //c3 = c1; //c3.operator=(c1)
        //c3.display();
        //Complex c3 = c1.operator+(c2); //explict call 
        //Complex c3 = c1+c2; //implicit call to c1.operator+(c2);
        //Complex c3 = c1++; //c1.operator++();
        //c1.display();//11 21
        //c3.display();//10 20
        // > < >= <= == !=
        //if (c1 == c2) // c1.operator==(c2)
            //cout << "Both are equal" << endl;
        //else
            //cout << "not equal" << endl;

        //(c1.add(c2)).sub(c3.mul(c4).div(c5))
        // operators which cannot be overloaded
        // ?: sizeof() typeid() . const_cast dynamic_cast reinterpert_cast static_cast
        //c3.display();//15 11


        //Complex c2(c1);
        //c2.display();

        /*
        try
        {
            Complex* cptr = new Complex;
            delete cptr;
        }
        catch (bad_alloc& b)
        {
            cout << b.what() << endl;
        }
        */
        /*
        Complex* cptr = new Complex;
        cptr->accept();
        (* cptr).display();
        delete cptr;
        */
        //auto_ptr shared_ptr unique_ptr weak_ptr 
        /*
        SmartPointer sp1(100,-99);
        sp1->accept();
        //(sp1.operator->())->accept();
        (*sp1).display();
        //(sp1.operator*()).display();
        cout << sp1->getreal() << " " << sp1->getimag() << endl;
        sp1->setimag(999);
        sp1->display();
        */
        Complex c1(10, 3);
     
        Complex cc;
        cin >> c1 >> cc; //(cin.operator>>(c1)).operator >>(cc)
        //operator >> (operator>>(cin, c1), cc);

        cout << cc<< " "<<c1<<endl;
        //operator << (operator<<(cout, c1), cc);

        //cc = c1 + 5;//c1.operator+(5);
        //cc = 5 + c1;//operator+(5,c1);
        //cc = c1++; //operator++(c1); //c1.operator++()
        //cc.display();//10 3
        //c1.display();//11 4
    }
    // operators which cannot be overloaded!
    //  ?: sizeof . :: typeid casting_operators
    // operators which cannot be overloaded globally as friends 
    // -> = [] () 
    // sp1->accept(); //(sp1.operator->())->accept();
    // 5->accept();
    // friends can help you to overload opertors when the left hand side becomes a bulitin type
    // friends can also help you to overload >> << 
    // operators which can overloaded only gloabally are  << >> 
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
