#include <iostream>
#include "StaticUse.h"

using namespace std;

StaticUse::StaticUse()
{
	cout << __func__ <<endl;
}

StaticUse::~StaticUse()
{
	cout << __func__ <<endl;
}

