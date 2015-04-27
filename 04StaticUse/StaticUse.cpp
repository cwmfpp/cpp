#include <iostream>
#include "StaticUse.h"

int StaticUse::m_one = 1;
int StaticUse::m_two = 2;
int StaticUse::sm_value = 0;

using namespace std;


StaticUse::StaticUse()
{
	m_one = 100;
	cout << __func__ <<endl;
}

StaticUse::~StaticUse()
{
	cout << __func__ <<endl;
}

void StaticUse::print(void)
{
	cout << __FILE__ << ":" << __func__ << ":" << __LINE__ << ":m_one=" << m_one <<endl;
	cout << __FILE__ << ":" << __func__ << ":" << __LINE__ << ":m_two=" << m_two <<endl;
	cout << __FILE__ << ":" << __func__ << ":" << __LINE__ << ":m_three=" << m_three <<endl;

}

