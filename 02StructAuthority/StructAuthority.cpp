#include <iostream>
#include "StructAuthority.h"

using namespace std;

StructAuthority::StructAuthority(void)
{
	cout << __func__ <<endl;
}

StructAuthority::~StructAuthority(void)
{
	cout << __func__ <<endl;
}

void StructAuthority::foo(void)
{
	cout << __func__ <<endl;
}

void StructAuthority::setValue(int value)
{
	cout << __func__ <<endl;
	m_value = value;
}

int StructAuthority::getValue(void)
{
	cout << __func__ <<endl;
	return m_value;
}
