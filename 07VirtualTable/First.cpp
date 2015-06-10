#include <iostream>
#include "First.h"

using namespace std;

First::First()
{
	cout << __FILE__ << ":" <<  __FUNCTION__ << endl;
}

First::~First()
{
	cout << __FILE__ << ":" <<  __FUNCTION__ << endl;
}


void First::vFunc1(int a)
{
	cout << __FILE__ << ":" <<  __FUNCTION__ << endl;
}

void First::vFunc2()
{
	cout << __FILE__ << ":" <<  __FUNCTION__ << endl;
}


void First::vFunc3()
{
	cout << __FILE__ << ":" <<  __FUNCTION__ << endl;
}


void First::vFunc4()
{
	cout << __FILE__ << ":" <<  __FUNCTION__ << endl;
}

void First::vFunc5()
{
	cout << __FILE__ << ":" <<  __FUNCTION__ << endl;
}


void First::m()
{
	cout << __FILE__ << ":" <<  __FUNCTION__ << endl;
}

void First::m(int a)
{
	cout << __FILE__ << ":" <<  __FUNCTION__ << endl;
}

