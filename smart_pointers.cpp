#include<iostream>
#include<string>
#include<memory>
#include<crtdbg.h>

using namespace std;

//auto_ptr shared_ptr unique_ptr weak_ptr

class Vehicle
{
	string name;
public: Vehicle() {
	cout << "Vehicle is created!" << endl;
	}
	  Vehicle(string name) :name(name)
	  {
		  cout << name << " has been created " << endl;
	  }
	  void start()
	  {
		  cout << name << " has been started ...." << endl;
	  }
	  ~Vehicle()
	  {
		  cout << name << " destroyed!" << endl;
	  }
};
void bar(unique_ptr<Vehicle> myv2)
{
	myv2->start();
}
void foo()
{
	//shared_ptr<Vehicle> v1(new Vehicle("ford"));
	unique_ptr<Vehicle> v1(new Vehicle("volkswagen"));
	//shared_ptr<Vehicle> v1=make_shared<Vehicle>("skoda");
	{
		//shared_ptr<Vehicle> v2 = v1;
		//unique_ptr<Vehicle> v2 = v1; //error! as unique_ptr will not share resources!
		unique_ptr<Vehicle> v2 = std::move(v1); //perform move semantics to transfer ownership of resource
		//v1->start(); //If you transfer the ownership dont not use that object afterwards!
		v2->start();
		//shared_ptr<Vehicle> v1(new Vehicle("ford"))
		bar(std::move(v2));
		//v2->start(); //error! as resource ownership is already transfered to other object!
	}
	//cout << "Count is " << v1.use_count() << endl;

}
int main()
{
	{
		/*
		Vehicle* myvehicle = new Vehicle("audi");
		myvehicle->start();
		delete myvehicle;
		myvehicle = nullptr;
		*/
		//Note: Stop creating raw pointers of your class!
		
		
		//Vehicle* myvehicle1 = new Vehicle("audi");
		//Vehicle* myvehicle2 = new Vehicle("bmw");
		//shared_ptr<Vehicle> newv1(myvehicle1);
		//newv1->start();
		//{
		//	shared_ptr<Vehicle> newv2 = make_shared<Vehicle>("bmw");
		//	newv2->start();
		//}
		
		
		//shared_ptr<Vehicle> Fourwheeler = make_shared<Vehicle>("jaguar");
		//shared_ptr<Vehicle> Fourwheeler(new Vehicle ("jaguar"));

		//Fourwheeler->start();
		//(* Fourwheeler).start();
		foo();

	}
	cout << "memory Leaks " << _CrtDumpMemoryLeaks() << endl;
	return 0;
}