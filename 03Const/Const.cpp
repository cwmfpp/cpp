#include <iostream>
#include "Const.h"

using namespace std;

Const::Const():m_two(2), m_one(m_two + 3), m_three(m_two+1), m_four(4), m_five(5)
{
	cout << __func__ << ":" << __LINE__ << ":m_one=" << m_one <<endl;
	cout << __func__ << ":" << __LINE__ << ":m_two=" << m_two <<endl;
	cout << __func__ << ":" << __LINE__ << ":m_three=" << m_three <<endl;
	cout << __func__ << ":" << __LINE__ << ":m_four=" << m_four <<endl;
	cout << __func__ << ":" << __LINE__ << ":m_five=" << m_five <<endl;
}

Const::~Const()
{
	cout << __func__ <<endl;
}

void Const::printValue(void)
{
	cout << __func__ << ":" << __LINE__ << ":m_one=" << m_one <<endl;
	cout << __func__ << ":" << __LINE__ << ":m_two=" << m_two <<endl;
	cout << __func__ << ":" << __LINE__ << ":m_three=" << m_three <<endl;
	cout << __func__ << ":" << __LINE__ << ":m_four=" << m_four <<endl;
	cout << __func__ << ":" << __LINE__ << ":m_five=" << m_five <<endl;
}

