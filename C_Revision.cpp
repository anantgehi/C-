// C_Revision.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//3 Mandatory Rules to follow whenever you code in any language!
//1. identifiers names /file names 
//    a,b,c,s,i,n
// for (i=0;i<n;++i){}
// for(emp_id=1;emp_id<no_of_employee;++emp_id)
// {}
// show_bank_details() accept_customer_details()
// area_square(int,int) area_rectangle(float,float) area_circle(float)

//2. use extensive documentation for your code
// If you change code / change the documentation as well!
//3. consistent 

#include <iostream>
#include<crtdbg.h>
//using namespace std;

#include<stdio.h>
#include<stdlib.h>
#include"head.h"

#define SIZE 10

#pragma warning (disable:4996)


using namespace std;

int myvalue = 1000;
//extern const int myconst;

void bar(int *newptr1)
{
    printf("bar called");
}




int main(int argc,char *argv[])
{

   /*
    const int myconst = 10000;

    int* ptr = const_cast<int*>(& myconst);
    *ptr = 20000;
    printf("%d %u\n", myconst,&myconst);
    printf("%d %u\n", *ptr,ptr);
    bar(const_cast<int*>( & myconst));

    printf("%d ", myvalue); //1000
    printf("%d ", add()); //
    printf("%d ", myvalue);//-99
    //foo();
    //foo();
    //printf("%d", myconst);
    printf("%d", x);//50
    printf("square is %d", square(5));
    */
    //const int * ptr == int const * ptr
    // you can change the contents of the pointer
    // but you cannot change the values pointed by the pointer using the pointer
    

    //int x=2000;
    //int& ref = x;
    //int * const ref=&x;
    //std::cout << ref << std::endl; //*ref
    //std::cout << &ref << " " << &x << std::endl;
    //ref = 20;
    //ref++;
    //std::cout << ref << " " << x << std::endl;

    //int arr[5] = { 10,20,30,40,50 };
    
    //printf("%u %u\n", arr, &arr);
    //printf("%u %u\n", arr+1, &arr+1);
    //printf("%u %u %u %u\n", arr[0], 0[arr],*(arr+0),*(0+arr));
    //int *ptr=arr+1;
    //ptr++;
    //++arr;

    //int* brr[5] = {arr,}

    //int arr[2][2] = { 10,20,30,40 };
    //printf("%u %u %u %u %u\n", arr, &arr, arr[0], &arr[0], &arr[0][0]);
    //printf("%u %u %u %u %u\n", arr+1, &arr+1, arr[0]+1, &arr[0]+1, &arr[0][0]+1);

    //int a, b, c = 1;
    //int& ref1 = a;
    //int& ref2 = b;
    //int& ref3 = c;
    //int &arr[5]={ref1,ref2,ref3}; //error

    //int arr[5]={1,2,3,4,5};
    //int (& ref)[5]=arr; //reference to an array
    {
        /*
        char *arr=new char[80];
        cout << "Enter the string" << endl;
        cin >> arr;
        //cin.getline(arr,80,'\n');

        cout << arr << endl;
        delete[]arr;
        arr = nullptr;
        */
        int n;
        cout << "How many records you want?" << endl;
        cin >> n;
        Employee* eptr = new Employee[n];
        cout << "Enter employeeids and names" << endl;
        for (int i = 0; i < n; ++i)
            cin >> eptr[i].empid >> (eptr + i)->name;
        // -> == *.

        display_employee(eptr,n);

        delete[]eptr;
        eptr = nullptr;

        /*
        int* arr = new int[5]{ 1,2,3,4,5 };
        int* const& ref = arr; //reference to an array!
        for (int i = 0; i < 5; ++i)
            std::cout << ref[i] << " " << arr[i] << std::endl;
        //delete []arr;
        arr = nullptr;
        */

        /*
        int n;
        cout << "How many rows" << endl;
        cin >> n;

        int **arr=new int*[n]; //allocate memory for array of pointers
        for (int i = 0; i < n; i++)
        {
            arr[i] = new int[2]; // allocate 2 elements each for each pointer!
        }
        
        //int arr[2][2];
        cout << "Enter the 2D array :" << endl;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < 2; ++j)
                cin >> arr[i][j];
        }
        cout << "Entered 2D array at runtime is :" << endl;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < 2; ++j)
                cout<< arr[i][j]<<" ";
            cout << endl;
        }
        for (int i = 0; i < n; ++i) //release array of integers first
            delete arr[i];

        delete[]arr; //release array of pointers
        arr = nullptr;
        */

        //char arr[5][20] = { "india","australia","england","westindies","srilanka" };

    }
    std::cout << "Leaks = " << _CrtDumpMemoryLeaks() << std::endl;


    //const int y = 20;
    //int  * const ptr = &x;
    //x = 20;
    //ptr = &y;
    //*ptr;
    //ptr++;
    //*ptr = 999;
    //(*ptr)--;
    //printf("%d", *ptr);



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
