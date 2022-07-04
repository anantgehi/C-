#include <iostream>
#include<typeinfo> 
#include<ctime>

using namespace std;

class Warrior
{
public: virtual void attack() = 0;
};
class Swordsman :public Warrior
{
public:	virtual void attack()
		{
			cout << "Swordsman attacks with sword" << endl;
		}
};
class Archers :public Warrior
{
public:	virtual void attack()
		{
			cout << "Archers attacks with bow and arrow!" << endl;
		}
};
class Dragons:public Warrior
{
public:	virtual void attack()
		{
			cout << "Dragon attacks with fire!" << endl;
		}
		void fly()
		{
		  cout << "Dragon can fly!" << endl;
		}
};


Warrior* create_warriors()
{
	switch(rand()%3)
	{
	case 0: return new Swordsman;
	case 1: return new Archers;
	case 2: return new Dragons;
	}
}

int main()
{
	Warrior* mywarriors;
	int i = 0;

	int count_ar, count_sw, count_dr;
	count_ar = count_sw = count_dr = 0;

	srand(time(NULL));
	while (i < 10)
	{
		mywarriors=create_warriors();
		if (typeid(*mywarriors) == typeid(Swordsman))
		{
			mywarriors->attack();
			count_sw++;
		}
		if (typeid(*mywarriors) == typeid(Archers))
		{
			mywarriors->attack();
			count_ar++;
		}
		if (typeid(*mywarriors) == typeid(Dragons))
		{
			mywarriors->attack();
			static_cast<Dragons*>(mywarriors)->fly();
			count_dr++;
		}

		i++;
	}
	cout << "Swordsman " << count_sw << endl;
	cout << "Archers " << count_ar << endl;
	cout << "Dragons " << count_dr << endl;
	return 0;
}