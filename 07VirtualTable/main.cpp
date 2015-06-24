#include <iostream>
#include <stdio.h>

#include "First.h"
#include "Second.h"
#include "Fourst.h"

using namespace std;

typedef void (*pFunc)(void);

void testFirst(void)
{
	First first;
	int *vTable_ptr = NULL;
	pFunc func_ptr = NULL;

	func_ptr = (pFunc)*((int *)(*((int *)(&first))));
	cout << (int)func_ptr << endl;
	func_ptr();
	
	vTable_ptr = (int *)*((int *)(&first));
	for(int i = 0; i < 5; i++)
	{
		printf("%d,addr=0x%x\n", i+1, (unsigned int)(vTable_ptr+i));
		func_ptr = (pFunc)*(vTable_ptr+i);
		func_ptr();
		if(NULL == (vTable_ptr + i))
		{
			printf("virtual table end\n");
		}
		if(0 == *(vTable_ptr + i))
		{
			printf("virtual table end\n");
		}
	}
	printf("===========%s end=========\n", __FUNCTION__);
}

void testSecond(void)
{
	Second second;
	int *vTable_ptr = NULL;
	pFunc func_ptr = NULL;

	func_ptr = (pFunc)*((int *)(*((int *)(&second))));
	cout << (int)func_ptr << endl;
	func_ptr();
	
	vTable_ptr = (int *)*((int *)(&second));
	for(int i = 0; i < 6; i++)
	{
		printf("%d,addr=0x%x\n", i+1, (unsigned int)(vTable_ptr+i));
		func_ptr = (pFunc)*(vTable_ptr+i);
		func_ptr();
		if(NULL == (vTable_ptr + i))
		{
			printf("virtual table end\n");
		}
		if(0 == *(vTable_ptr + i))
		{
			printf("virtual table end\n");
		}
	}
	printf("===========%s end=========\n", __FUNCTION__);
}

void testFirstSecond(void)
{
	First *first_ptr = new Second;

	first_ptr->vFunc1(1);
	first_ptr->vFunc2();
	first_ptr->vFunc3();
	first_ptr->vFunc4();
	first_ptr->vFunc5();
	//first_ptr->vFunc6();//error
	first_ptr->m();

	Second *second_ptr = new Second;

	second_ptr->vFunc1(1);
	second_ptr->vFunc2();
	second_ptr->vFunc3();
	second_ptr->vFunc4();
	second_ptr->vFunc5();
	//second_ptr->vFunc6();//error
	second_ptr->m();
	//second_ptr->m(1);//error
	printf("===========%s end=========\n", __FUNCTION__);
}

void testFourst(void)
{
	Fourst fourst;
	pFunc *func_ptr;
	int * vTable_ptr = NULL;
	vTable_ptr = (int *)*((int *)&fourst);

	for(int i = 0; i < 7; i++)
	{
		func_ptr = (pFunc *)(vTable_ptr + i);
		if(NULL == func_ptr)
		{
			printf("null null\n");
		}
		(*func_ptr)();
	}
	printf("====================\n");

	vTable_ptr = (int *)*((int *)&fourst + 1);
	for(int i = 0; i < 3; i++)
	{
		func_ptr = (pFunc *)(vTable_ptr + i);
		(*func_ptr)();
	}

	printf("===========%s end=========\n", __FUNCTION__);
}

int main()
{
	//testFirst();
	//testSecond();
	//testFirstSecond();
	testFourst();

	return 0;
}
