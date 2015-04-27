#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "WithCC.h"

using namespace std;

static const char * name = "hello world WithCC";
int WithCC::m_objectCount = 0;

WithCC::WithCC()
{
	m_objectCount++;
	m_bufferPtr = (char *)malloc(1024);
	strncpy(m_bufferPtr, name, strlen(name));
	m_bufferPtr[strlen(name)] = '\0';

	cout << __func__ << ":" << __LINE__ << ":m_objectCount=" << m_objectCount <<endl;
}

WithCC::WithCC(const WithCC &member)
{
	m_objectCount++;
	m_bufferPtr = (char *)malloc(1024);
	strncpy(m_bufferPtr, name, strlen(name));
	m_bufferPtr[strlen(name)] = '\0';
	
	cout << __func__ << ":" << __LINE__ << ":m_objectCount=" << m_objectCount <<endl;
}

WithCC::~WithCC()
{
	m_objectCount--;
	cout << __func__ << ":" << __LINE__ << ":m_objectCount=" << m_objectCount <<endl;
	if(m_bufferPtr)
	{
		free(m_bufferPtr);
		m_bufferPtr = NULL;
	}
}

void WithCC::m_printf(WithCC member)
{
	
}

int WithCC::getObjectCount()
{
	return m_objectCount;
}

WithCC WithCC::handle(WithCC member)
{
	cout << "member.m_bufferPtr:" << member.m_bufferPtr <<endl;
	cout << __func__ <<":"<< __LINE__ << " object count=" << WithCC::getObjectCount() << ":member.m_bufferPtr:" << member.m_bufferPtr <<endl;	
	return member;
}

