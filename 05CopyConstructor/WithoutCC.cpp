#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "WithoutCC.h"

using namespace std;

static const char * name = "hello world WithoutCC";
int WithoutCC::m_objectCount = 0;

WithoutCC::WithoutCC()
{
	m_objectCount++;
	m_bufferPtr = (char *)malloc(1024);
	strncpy(m_bufferPtr, name, strlen(name));
	m_bufferPtr[strlen(name)] = '\0';
	cout << strlen(name) <<endl;
	cout << __func__ << ":" << __LINE__ << ":m_objectCount=" << m_objectCount <<endl;
}

WithoutCC::~WithoutCC()
{
	m_objectCount--;
	cout << __func__ << ":" << __LINE__ << ":m_objectCount=" << m_objectCount <<endl;
	if(m_bufferPtr)
	{
		free(m_bufferPtr);
		m_bufferPtr = NULL;
	}
}

void WithoutCC::m_printf(WithoutCC member)
{
	
}

int WithoutCC::getObjectCount()
{
	return m_objectCount;
}

WithoutCC WithoutCC::handle(WithoutCC member)
{
	cout << "member.m_bufferPtr:" << member.m_bufferPtr <<endl;
	return member;
}

