#include <iostream>
#include "StaticUse.h"

int StaticUse::m_one = 1;
int StaticUse::m_two = 2;

using namespace std;


StaticUse::StaticUse()
{
	cout << __func__ <<endl;
}

StaticUse::~StaticUse()
{
	cout << __func__ <<endl;
}

