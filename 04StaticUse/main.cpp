#include <iostream>
#include "StaticUse.h"

using namespace std;

void test_one(void)
{
	StaticUse temp;
	cout << __FILE__ << ":" << __func__ << ":" << __LINE__ << ":sizeof(StaticUse)=" << sizeof(StaticUse) <<endl;
}

void test_two(void)
{
	StaticUse temp;
	StaticUse::print();
	temp.print();	
	cout << __FILE__ << ":" << __func__ << ":" << __LINE__ << ":StaticUse::sm_value=" << StaticUse::sm_value <<endl;
	cout << __FILE__ << ":" << __func__ << ":" << __LINE__ << ":temp.sm_value=" << temp.sm_value <<endl;
	
}

int main(void)
{
	//test_one();
	test_two();

	return 0;
}

