#include <iostream>

#include "ClassSize.h"
#include "First.h"
#include "Second.h"

using namespace std;

int main()
{
	//ClassSize hello;	
	
	Second y;

	cout << "sizeof(ClassSize)=" << sizeof(ClassSize) <<endl;
	cout << "sizeof(First)=" << sizeof(First) <<endl;
	cout << "sizeof(Second)=" << sizeof(Second) <<endl;
	cout << y.read() <<endl;
	return 0;
}
