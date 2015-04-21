#include <iostream>
#include "Const.h"

using namespace std;

Const::Const()
{
	cout << "bufsize=" << bufsize <<endl;
	cout << __func__ <<endl;
}

Const::~Const()
{
	cout << __func__ <<endl;
}

