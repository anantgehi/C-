#include <iostream>


using namespace std;


class Vehicle //abstract class
{
public: virtual int no_of_wheels() = 0;

};
class Chargeable //interface
{
public: virtual void charging() = 0;
};

class TwoWheeler :public Vehicle
{
public: int no_of_wheels() { return 2; };
};
class Fourwheeler :public Vehicle
{
public: int no_of_wheels() { return 4; };
};
class Truck :public Vehicle,public Chargeable
{
public: int no_of_wheels() { return 8; }
		virtual void charging() { cout << "Truck is charging!" << endl; }
};
int main()
{
	Vehicle* myvehicle = new Fourwheeler;
	cout<<"Four wheeler has "<<myvehicle->no_of_wheels() <<" wheels" << endl;
	//myvehicle->charging();

	myvehicle = new TwoWheeler;
	cout << "Two wheeler has " <<myvehicle->no_of_wheels() <<" wheels" <<endl;
	delete myvehicle;
	myvehicle = nullptr;

	myvehicle = new Truck;
	cout << "Truck has " << myvehicle->no_of_wheels() << " wheels" << endl;

	static_cast<Truck*>(myvehicle)->charging();
	
	delete myvehicle;
	myvehicle = nullptr;


	return 0;
}