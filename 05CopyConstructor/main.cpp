#include <iostream>
#include "WithCC.h"
#include "WithoutCC.h"
#include "ShieldCC.h"

using namespace std;

void testWithoutCC(void)
{
	WithoutCC woCC_one;
	WithoutCC woCC_two = woCC_one;//use c++ copy constructor function
	WithoutCC::handle(woCC_one);		
	cout << __func__ << " object count=" << WithoutCC::getObjectCount() <<endl;	
	cout << "=========" << __func__ << ":" << __LINE__ <<"============================================" << endl;	
}

void testWithCC(void)
{
	WithCC wCC_one;
	WithCC wCC_two = wCC_one;
	WithCC wCC_three = WithCC::handle(wCC_one);
	cout << __func__ <<":"<< __LINE__ << " object count=" << WithCC::getObjectCount() <<endl;	
	cout << "=========" << __func__ << ":" << __LINE__ <<"============================================" << endl;	
}

void testShieldCC(void)
{
	ShieldCC sCC_one;
//	ShieldCC sCC_two = sCC_one; //error 调用了拷贝构造函数
//	ShieldCC sCC_three = ShieldCC::handle(sCC_one); //error 调用了拷贝构造函数
	cout << "=========" << __func__ << ":" << __LINE__ <<"============================================" << endl;	
}


int main(void)
{
	//testWithoutCC();
	//testWithCC();
	testShieldCC();

	return 0;
}

