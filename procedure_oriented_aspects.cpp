// procedure_oriented_aspects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//state behavior identity responsiblity
//abstraction encapsulation 
//inheritance (is a kind)  
// vehicle - start() stop() acclerate()
// fourwheeler
// audi.start();
// vehicle=fourwheeler
// 
// containment (has a kind)
// vehcile (engine)
// composition
// aggregation
// association

//polymorphism


#include <iostream>
#include <string>
#include"head1.h"
#include"head2.h"
#include"head3.h"
#include"head4.h"

//const
//references
//inlines
//dynamic memory allocation
//default arguments
//function overloading
//namespaces
using namespace std;

/*
void addmul(int x, int y,int *s,int *m)
{
	*s = x + y;
	*m = x * y;
	//cout << s << " " << m << endl;
}
*/
void addmul(int x, int y, int& s, int& m)
{
	s = x + y;
	m = x * y;
	//cout << s << " " << m << endl;
}

int& function(int &val)
{
	val = 999;
	return val;
}
//location of the variable is returned when you return by reference
//so function call can appear on left hand side of assignment operator!



/*
void show(int &ref)
{
	cout << "reference int" << ref << endl;
}
*/
extern "C" //linkage directive
{
	void show(int x);
}
#include"../StaticLib1/myadd.h"


//using namespace Anant::Aishwarya;


using namespace Anant;



int main()
{
	cout << dummy_var << endl;
	dummy_foo();

	//newbar();

	//using namespace Anant;
	//using namespace Akshay;
	//using Akshay::bar;
	//using Anant::foo;

	//cout << my_var << endl;
	//foo();

	//Anant::Aishwarya::foo();

	//cout << my_var << endl;
	//foo();
	//bar();
	//foo();

	//cout << Anant::my_var << endl;
	//Akshay::foo();
	//Anant::bar();

	//int val = 1000;
	//show(123);
	//cout << add(100, 200) << endl;

	/*
	display_movie("stallone", "rocky", 1975);
	display_movie("mel gibson","braveheart");
	display_movie("al pacino");
	display_movie();
	*/

	//int var = 100;
	//var = function(var);
	//function(var) = 786;
	//cout << var << endl;

	//int val1 = 10;
	//int val2 = 20;
	//int sum = 0;
	//int pro = 0;
	//addmul(val1, val2, &sum,&pro);
	//addmul(val1, val2, sum, pro);
	//addmul(val1, val2, sum, pro);
	//cout << "Sum = " << sum << " Product = " << pro << endl;

	//int x = 10;
	//int* ptr = &x;
	//int*& ref = ptr; //reference to pointer to integer
	//one can create reference to a pointer
	//but one cannot create pointer to a reference
	//cout << *ref << endl;
	//int& myref = x;
	//int* ptr = &myref; //pointer to referent not reference!
	//int*ptr1 = NULL;
	//const int& myref = NULL;
	//reference to a constant has to be constant reference!
	//cout << myref << endl;

	//const int& newref = 100;
	//cout << newref << endl;

	return 0;
}
//name managling //name decoration!

void show(int x)
{
	cout << "show int" << x << endl;
}
