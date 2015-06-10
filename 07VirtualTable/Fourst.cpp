#include <iostream>
#include "Fourst.h"

using namespace std;

Fourst::Fourst() : First(), Third()
{
	cout << __FILE__ << ":" <<  __FUNCTION__ << endl;
}

Fourst::~Fourst()
{
	cout << __FILE__ << ":" <<  __FUNCTION__ << endl;
}

void Fourst::vFourstFunc1()
{
	cout << __FILE__ << ":" <<  __FUNCTION__ << endl;
}

void Fourst::vFunc2()
{
	cout << __FILE__ << ":" <<  __FUNCTION__ << endl;
}

void Fourst::vFunc4()
{
	cout << __FILE__ << ":" <<  __FUNCTION__ << endl;
}

void Fourst::vThirdFunc2()
{
	cout << __FILE__ << ":" <<  __FUNCTION__ << endl;
}


