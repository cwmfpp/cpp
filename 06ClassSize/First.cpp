#include <iostream>
#include "First.h"

using namespace std;

First::First()
{
	i = 0;
	cout << __FUNCTION__ << endl;
}

First::~First()
{
	cout << __FUNCTION__ << endl;
}

void First::set(int I)
{
	i = I;
}

int First::read() const
{
	return i;
}

int First::permute()
{
	return i = i * factor;
}

void First::f()
{
}

