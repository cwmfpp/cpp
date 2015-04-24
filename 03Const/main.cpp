#include <iostream>
#include "Const.h"
#include "common.h"

using namespace std;

const int i = 100;
const int j = i + 10;
long address = (long)&j;
char buf[j + 10] = {0};

const int array[] = {1, 2, 3, 4};
//float f[array[3]]; //illegal

void f(int &value)
{

}

void g(const int &value)
{

}

int main(void)
{
	Const temp;

	temp.printValue();
	cout << "==============="<< __func__ << ":" << __LINE__ << "============" << endl;
//	f(1); //error
	g(2);
	cout << "==============="<< __func__ << ":" << __LINE__ << "============" << endl;
	cout << "i=" << i <<endl;	
	cout << "j=" << j <<endl;	
	cout << "address=" << address <<endl;	
	cout << "sizeof(buf)=" << sizeof(buf) <<endl;	
	
	return 0;
}

