#include <iostream>
using namespace std;

namespace Anant
{
	const int my_var = 20000;
	class Demo
	{

	};
	namespace Aishwarya
	{
		static void foo()
		{
			cout << "foo created by anant" << endl;
		}
	}
	inline void bar()
	{
			cout << "bar inline function created by anant" << endl;
	}

}