#include <iostream>
#include "StaticUse.h"

using namespace std;

void test_one(void)
{
	StaticUse temp;
	cout << __FILE__ << ":" << __func__ << ":" << __LINE__ << ":sizeof(StaticUse)=" << sizeof(StaticUse) <<endl;
}


int main(void)
{
	test_one();
	
	return 0;
}

