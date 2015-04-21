#include <iostream>
#include "Const.h"

using namespace std;

const int i = 100;
const int j = i + 10;
long address = (long)&j;
char buf[j + 10] = {0};

const int array[] = {1, 2, 3, 4};
//float f[array[3]]; //illegal

int main(void)
{
	Const temp;

	cout << "i=" << i <<endl;	
	cout << "j=" << j <<endl;	
	cout << "address=" << address <<endl;	
	cout << "sizeof(buf)=" << sizeof(buf) <<endl;	
	
	return 0;
}

