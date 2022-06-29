#pragma once

#include <iostream>
using namespace std;

namespace
{
//unnamed namespaces have internal linkage!
	int dummy_var = 0;

	void dummy_foo()
	{
		cout << "dummy_foo called" << endl;
	}
}