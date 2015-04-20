#include <iostream>
#include "StructAuthority.h"


using namespace std;

int main(void)
{
	StructAuthority temp;
	temp.foo();
	temp.setValue(100);

	cout<< temp.getValue() <<endl;
	
	return 0;
}

